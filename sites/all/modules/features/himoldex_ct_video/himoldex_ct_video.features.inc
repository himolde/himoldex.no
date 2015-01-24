<?php
/**
 * @file
 * himoldex_ct_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function himoldex_ct_video_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function himoldex_ct_video_node_info() {
  $items = array(
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Tittel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
