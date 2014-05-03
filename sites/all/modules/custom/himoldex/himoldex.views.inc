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
    // Remove video date filter for all courses but MAT001, MAT110 and BØK500.
    if (($path != 'node/86/videoer') && ($path != 'node/5/videoer') && ($path != 'node/98/videoer')) {
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
