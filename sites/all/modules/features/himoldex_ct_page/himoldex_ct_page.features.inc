<?php
/**
 * @file
 * himoldex_ct_page.features.inc
 */

/**
 * Implements hook_node_info().
 */
function himoldex_ct_page_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Grunnleggende side'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Tittel'),
      'help' => '',
    ),
  );
  return $items;
}
