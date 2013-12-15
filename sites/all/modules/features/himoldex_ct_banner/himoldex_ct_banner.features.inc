<?php
/**
 * @file
 * himoldex_ct_banner.features.inc
 */

/**
 * Implements hook_node_info().
 */
function himoldex_ct_banner_node_info() {
  $items = array(
    'banner' => array(
      'name' => t('Banner'),
      'base' => 'node_content',
      'description' => t('Brukt i slideshow. Inneholder kun et bilde og hvor bilde skal lenke til.'),
      'has_title' => '1',
      'title_label' => t('Tittel'),
      'help' => '',
    ),
  );
  return $items;
}
