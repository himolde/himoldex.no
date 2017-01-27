<?php

/**
 * Implements hook_views_pre_view().
 */
function himoldex_views_pre_view(&$view, &$display_id, &$args) {
  // Handle the display/usage of the yearly filter.
  if ($view->name == 'videos') {
    // Create the wrapper for the node passed to the view.
    $wrapper = entity_metadata_wrapper('node', $args[0]);
    $display_thisyear = $wrapper->field_course_video_thisyear->value();
    $curryear_def = $wrapper->field_course_video_curryear_def->value();
    if ($display_thisyear) {
      // This node/course should only display videoes from the current year
      // or a given year if we allow bypassing with direct URL.
      $query_parameters = drupal_get_query_parameters();
      if (!empty($query_parameters['period']['value']['year'])) {
	$current_year = $query_parameters['period']['value']['year'];
      }
      else {
	$current_year = date("Y");
      }
      $filter_item = $view->get_item($display_id, 'filter', 'field_video_dato_value');
      $filter_item['value']['min'] = NULL;
      $filter_item['value']['max'] = NULL;
      $filter_item['value']['value'] = $current_year;
      // Disable exposed filter in UI to hide the videos from other years.
      $filter_item['exposed'] = FALSE;
      $view->set_item($display_id, 'filter', 'field_video_dato_value', $filter_item);
    }
    elseif ($curryear_def) {
      // This node/course should display videos from the current year
      // as default (but not hide other years).
      $current_year = date("Y");
      $filter_item = $view->get_item($display_id, 'filter', 'field_video_dato_value');
      $filter_item['value']['value'] = $current_year;
      $view->set_item($display_id, 'filter', 'field_video_dato_value', $filter_item);
    }
  }
  // Handle the display of the yearly filter - not used.
  if ($view->name == 'videos_DISABLED') {
    // Find path (to decide which course we are viewing)
    $current_path = current_path();
    $path = drupal_lookup_path('alias', $current_path);
    if (empty($path)) {
      $path = $current_path;
    }
    // Keep video date filter for the following courses.
    $exclude_nids = array(
      'bok500' => 98,
      'ibe101' => 7,
      'ibe102' => 82,
      'ibe110' => 8,
      'ibe151' => 78,
      'ibe312' => 34,
      'ibe430' => 87,
      'mat001' => 86,
      'mat100' => 80,
      'mat110' => 5,
      'mat210' => 136,
      'scm200' => 769,
      'scm500' => 214,
      'sok200' => 796,
      'tra310' => 239,
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
  elseif ($view->name == 'videos') {
    // If there is a pager (and not all videos are shown), add info about how to select all videos
    if (($view->query->pager->total_items > $view->query->pager->options['items_per_page']) &&
        (!isset($view->exposed_input['items_per_page']) || ($view->exposed_input['items_per_page'] != 'All'))) {
      $output = sprintf('<div class="messages status">%s</div>',
	'For å se alle videoene for et spesifikt semester, velg riktig år og "Alle" for antall videoer per side - se øverst på denne siden.');
      $view->attachment_after = $output;
    }
  }
}
