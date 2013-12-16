<?php
/**
 * @file
 * himoldex_user_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function himoldex_user_profile_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_data|user|user|form';
  $field_group->group_name = 'group_user_data';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Automatiske data',
    'weight' => '5',
    'children' => array(
      0 => 'ldap_user_puid_sid',
      1 => 'ldap_user_puid',
      2 => 'ldap_user_puid_property',
      3 => 'ldap_user_current_dn',
      4 => 'ldap_user_prov_entries',
      5 => 'ldap_user_last_checked',
      6 => 'field_room',
      7 => 'field_phone',
      8 => 'account',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-user-data field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_data|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_homepage|user|user|form';
  $field_group->group_name = 'group_user_homepage';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hjemmeside',
    'weight' => '1',
    'children' => array(
      0 => 'field_lecture_homepage',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-user-homepage field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_homepage|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_information|user|user|form';
  $field_group->group_name = 'group_user_information';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Annen informasjon',
    'weight' => '3',
    'children' => array(
      0 => 'field_cell_phone',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-user-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_information|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_info|user|user|form';
  $field_group->group_name = 'group_user_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bilde og beskrivelse',
    'weight' => '2',
    'children' => array(
      0 => 'field_lecture_desc',
      1 => 'picture',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-user-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_info|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_settings|user|user|form';
  $field_group->group_name = 'group_user_settings';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Innstillinger',
    'weight' => '4',
    'children' => array(
      0 => 'timezone',
      1 => 'locale',
      2 => 'wysiwyg',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-user-settings field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_user_settings|user|user|form'] = $field_group;

  return $export;
}
