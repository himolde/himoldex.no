<?php
/**
 * @file
 * himolder_ct_research_group.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function himolder_ct_research_group_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_research_group_ext_members'
  $field_bases['field_research_group_ext_members'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_research_group_ext_members',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  return $field_bases;
}
