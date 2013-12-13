<?php

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
