<?php
/**
 * @file
 * himoldex_ct_study.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function himoldex_ct_study_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function himoldex_ct_study_node_info() {
  $items = array(
    'study' => array(
      'name' => t('Studium'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Område'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
