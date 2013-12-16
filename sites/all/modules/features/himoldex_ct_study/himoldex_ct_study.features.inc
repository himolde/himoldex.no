<?php
/**
 * @file
 * himoldex_ct_study.features.inc
 */

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
  return $items;
}