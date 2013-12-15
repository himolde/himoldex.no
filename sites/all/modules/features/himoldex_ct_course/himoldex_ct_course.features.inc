<?php
/**
 * @file
 * himoldex_ct_course.features.inc
 */

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
