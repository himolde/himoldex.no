<?php
/**
 * @file
 * himoldex_ct_video.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function himoldex_ct_video_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video_desc|node|video|form';
  $field_group->group_name = 'group_video_desc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Beskrivelse',
    'weight' => '3',
    'children' => array(
      0 => 'field_video_desc',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-video-desc field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_video_desc|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video_info|node|video|form';
  $field_group->group_name = 'group_video_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tema og dato',
    'weight' => '1',
    'children' => array(
      0 => 'field_video_dato',
      1 => 'field_video_topic',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-video-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_video_info|node|video|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video_url|node|video|form';
  $field_group->group_name = 'group_video_url';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'video';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'URL og type',
    'weight' => '2',
    'children' => array(
      0 => 'field_video_type',
      1 => 'field_video_youtube',
      2 => 'field_video_mediasite',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-video-url field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_video_url|node|video|form'] = $field_group;

  return $export;
}
