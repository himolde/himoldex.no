<?php

/**
 * Implements hook_views_pre_view().
 */
function himoldex_views_pre_view(&$view, &$display_id, &$args) {
  if ($view->name == 'videos') {
    // Find path (to decide which course we are viewing)
    $current_path = current_path();
    $path = drupal_lookup_path('alias', $current_path);
    if (empty($path)) {
      $path = $current_path;
    }
    // Remove video date filter for the following courses.
    $exclude_nids = array(
      'ibe110' => 8,
      'ibe151' => 78,
      'ibe312' => 34,
      'ibe430' => 87,
      'mat001' => 86,
      'mat100' => 80,
      'mat110' => 5,
      'bok500' => 98,
    );
    $nid = preg_replace('#node/([0-9]+)/videoer#', '$1', $path);
    if (!in_array($nid, $exclude_nids)) {
      $view->set_item($display_id, 'filter', 'field_video_dato_value', NULL);
    }
  }
}

/**
 * Implements hook_views_pre_render().
 */
function himoldex_views_pre_render(&$view) {
  if ($view->name == 'lecturer_in_studyplan') {
    $keys = array_keys($view->result);
    $lecturer_seen = array();
    foreach ($keys as $key) {
      $result = $view->result[$key];
      $lecturer_id = $result->field_data_field_course_lecture_field_course_lecture_target_;
      if (in_array($lecturer_id, $lecturer_seen)) {
        unset($view->result[$key]);
      } 
      else {
        $lecturer_seen[] = $lecturer_id;
      }
    }
  }
}
