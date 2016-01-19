<?php
/**
 * @file
 * himolder_ct_research_group.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function himolder_ct_research_group_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function himolder_ct_research_group_node_info() {
  $items = array(
    'research_group' => array(
      'name' => t('Research Group'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Navn'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
