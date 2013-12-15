<?php
/**
 * @file
 * himoldex_ct_study.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function himoldex_ct_study_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_study_courses|node|study|form';
  $field_group->group_name = 'group_study_courses';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tilhørende emner',
    'weight' => '4',
    'children' => array(
      0 => 'field_study_courses',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-study-courses field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_study_courses|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_study_desc|node|study|form';
  $field_group->group_name = 'group_study_desc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Beskrivelse',
    'weight' => '0',
    'children' => array(
      0 => 'field_study_desc',
      1 => 'field_study_video',
      2 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-study-desc field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_study_desc|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_study_plans|node|study|form';
  $field_group->group_name = 'group_study_plans';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Studieplaner',
    'weight' => '3',
    'children' => array(
      0 => 'field_study_plans',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-study-plans field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_study_plans|node|study|form'] = $field_group;

  return $export;
}
