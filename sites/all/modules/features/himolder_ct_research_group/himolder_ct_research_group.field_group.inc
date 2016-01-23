<?php
/**
 * @file
 * himolder_ct_research_group.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function himolder_ct_research_group_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_desc|node|research_group|form';
  $field_group->group_name = 'group_course_desc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'research_group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Beskrivelse og bilde',
    'weight' => '3',
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
  $field_groups['group_course_desc|node|research_group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_info|node|research_group|form';
  $field_group->group_name = 'group_course_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'research_group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Informasjon',
    'weight' => '1',
    'children' => array(
      0 => 'field_course_name',
      1 => 'field_course_homepage',
      2 => 'field_course_lecture',
      3 => 'field_course_fb_group',
      4 => 'field_course_promovideo',
      5 => 'field_youtube_playlist',
      6 => 'field_course_open',
      7 => 'field_mediasite_folder',
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
  $field_groups['group_course_info|node|research_group|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_videos|node|research_group|form';
  $field_group->group_name = 'group_course_videos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'research_group';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Videoer',
    'weight' => '2',
    'children' => array(
      0 => 'field_course_video',
      1 => 'field_course_video_thisyear',
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
  $field_groups['group_course_videos|node|research_group|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Beskrivelse og bilde');
  t('Informasjon');
  t('Videoer');

  return $field_groups;
}