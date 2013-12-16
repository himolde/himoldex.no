<?php
/**
 * @file
 * himoldex_ct_course.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function himoldex_ct_course_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function himoldex_ct_course_node_info() {
  $items = array(
    'course' => array(
      'name' => t('Emne'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
  );
  return $items;
}
