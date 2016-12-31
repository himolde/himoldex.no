<?php
/**
 * @file
 * himoldex_ct_studyplan.features.inc
 */

/**
 * Implements hook_node_info().
 */
function himoldex_ct_studyplan_node_info() {
  $items = array(
    'studyplan' => array(
      'name' => t('Studieplan'),
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
