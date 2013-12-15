<?php
/**
 * @file
 * himoldex_ct_news.features.inc
 */

/**
 * Implements hook_node_info().
 */
function himoldex_ct_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('Nyhet'),
      'base' => 'node_content',
      'description' => t('De tre siste nyhetene vises på forsiden - kun overskriften.'),
      'has_title' => '1',
      'title_label' => t('Tittel'),
      'help' => '',
    ),
  );
  return $items;
}
