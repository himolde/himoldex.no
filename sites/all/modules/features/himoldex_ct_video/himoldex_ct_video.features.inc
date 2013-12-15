<?php
/**
 * @file
 * himoldex_ct_video.features.inc
 */

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
  return $items;
}
