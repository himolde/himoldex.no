<?php
/**
 * @file
 * himoldex_ct_course.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function himoldex_ct_course_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_consumers|node|course|form';
  $field_group->group_name = 'group_course_consumers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relevante studier',
    'weight' => '4',
    'children' => array(
      0 => 'field_course_consumers',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-course-consumers field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_course_consumers|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_desc|node|course|form';
  $field_group->group_name = 'group_course_desc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Beskrivelse og bilde',
    'weight' => '5',
    'children' => array(
      0 => 'field_course_desc',
      1 => 'field_course_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-course-desc field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_course_desc|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_info|node|course|form';
  $field_group->group_name = 'group_course_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Informasjon',
    'weight' => '2',
    'children' => array(
      0 => 'field_course_code',
      1 => 'field_course_name',
      2 => 'field_course_homepage',
      3 => 'field_course_lecture',
      4 => 'field_course_fb_group',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-course-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_course_info|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_videos|node|course|form';
  $field_group->group_name = 'group_course_videos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Videoer',
    'weight' => '3',
    'children' => array(
      0 => 'field_course_video',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-course-videos field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_course_videos|node|course|form'] = $field_group;

  return $export;
}
