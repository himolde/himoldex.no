<?php
/**
 * @file
 * himoldex_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function himoldex_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Dialogknapp';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'dialog_button';
  $fe_block_boxes->body = '<p><a href="http://www.himolde.no/forstudentene/Sider/Studentverkt%C3%B8y/Dialogknappen.aspx"><img src="/img/himoldex-dialogknapp.png" /></a></p>';

  $export['dialog_button'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Supportknapp';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'support_button';
  $fe_block_boxes->body = '<p><a href="http://www.himolde.no/it-senteret/Sider/Mediasite.aspx"><img src="/img/himoldex-supportknapp.png" /></a></p>';

  $export['support_button'] = $fe_block_boxes;

  return $export;
}
