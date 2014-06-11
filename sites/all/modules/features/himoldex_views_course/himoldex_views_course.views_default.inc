<?php
/**
 * @file
 * himoldex_views_course.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function himoldex_views_course_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'course_information';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Emneinformasjon';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Emneinformasjon';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Bruk';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nullstill';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér på';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Synkende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relasjon: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_course_lecture_target_id']['id'] = 'field_course_lecture_target_id';
  $handler->display->display_options['relationships']['field_course_lecture_target_id']['table'] = 'field_data_field_course_lecture';
  $handler->display->display_options['relationships']['field_course_lecture_target_id']['field'] = 'field_course_lecture_target_id';
  $handler->display->display_options['relationships']['field_course_lecture_target_id']['label'] = 'Foreleser';
  /* Felt: Bruker: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'field_course_lecture_target_id';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Felt: Bruker: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_course_lecture_target_id';
  $handler->display->display_options['fields']['name']['label'] = 'Foreleser';
  $handler->display->display_options['fields']['name']['alter']['path'] = 'user/[uid]?width=600&height=600';
  $handler->display->display_options['fields']['name']['alter']['link_class'] = 'colorbox-node';
  $handler->display->display_options['fields']['name']['element_type'] = 'h4';
  $handler->display->display_options['fields']['name']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Felt: Bruker: Bilde */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'field_course_lecture_target_id';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['path'] = 'user/[uid]?width=600&height=600';
  $handler->display->display_options['fields']['picture']['alter']['link_class'] = 'colorbox-node';
  $handler->display->display_options['fields']['picture']['element_type'] = 'p';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'thumbnail';
  /* Felt: Innhold: Promovideo */
  $handler->display->display_options['fields']['field_course_promovideo']['id'] = 'field_course_promovideo';
  $handler->display->display_options['fields']['field_course_promovideo']['table'] = 'field_data_field_course_promovideo';
  $handler->display->display_options['fields']['field_course_promovideo']['field'] = 'field_course_promovideo';
  $handler->display->display_options['fields']['field_course_promovideo']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_course_promovideo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_promovideo']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_course_promovideo']['click_sort_column'] = 'input';
  $handler->display->display_options['fields']['field_course_promovideo']['settings'] = array(
    'youtube_size' => 'responsive',
    'youtube_width' => '',
    'youtube_height' => '',
    'youtube_autoplay' => 1,
    'youtube_showinfo' => 1,
    'youtube_controls' => 0,
    'youtube_autohide' => 0,
    'youtube_iv_load_policy' => 0,
  );
  /* Sorteringskriterium: Innhold: Innleggsdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Innhold: NID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Innhold: Publisert */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Innhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['course_information'] = array(
    t('Master'),
    t('Emneinformasjon'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Foreleser'),
    t('Promovideo'),
    t('Alle'),
    t('Block'),
  );
  $export['course_information'] = $view;

  $view = new view();
  $view->name = 'course_menu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Emnemeny';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Emnemeny';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Bruk';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nullstill';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér på';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Synkende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relasjon: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_course_node']['id'] = 'reverse_field_course_node';
  $handler->display->display_options['relationships']['reverse_field_course_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_course_node']['field'] = 'reverse_field_course_node';
  $handler->display->display_options['relationships']['reverse_field_course_node']['label'] = 'Melding';
  /* Felt: Innhold: NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Beskrivelse';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'h3';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Felt: Innhold: Hjemmeside */
  $handler->display->display_options['fields']['field_course_homepage']['id'] = 'field_course_homepage';
  $handler->display->display_options['fields']['field_course_homepage']['table'] = 'field_data_field_course_homepage';
  $handler->display->display_options['fields']['field_course_homepage']['field'] = 'field_course_homepage';
  $handler->display->display_options['fields']['field_course_homepage']['label'] = '';
  $handler->display->display_options['fields']['field_course_homepage']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_course_homepage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_homepage']['click_sort_column'] = 'url';
  /* Felt: Innhold: Video */
  $handler->display->display_options['fields']['field_course_video']['id'] = 'field_course_video';
  $handler->display->display_options['fields']['field_course_video']['table'] = 'field_data_field_course_video';
  $handler->display->display_options['fields']['field_course_video']['field'] = 'field_course_video';
  $handler->display->display_options['fields']['field_course_video']['label'] = '';
  $handler->display->display_options['fields']['field_course_video']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_course_video']['alter']['text'] = 'Videoer';
  $handler->display->display_options['fields']['field_course_video']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_course_video']['alter']['path'] = 'node/[nid]/videoer';
  $handler->display->display_options['fields']['field_course_video']['alter']['alt'] = 'Videoer';
  $handler->display->display_options['fields']['field_course_video']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_course_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_video']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_course_video']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_course_video']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_course_video']['delta_offset'] = '0';
  /* Felt: Meldinger */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_course_node';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Meldinger';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Meldinger';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/meldinger';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Felt: Innhold: Facebook-gruppe */
  $handler->display->display_options['fields']['field_course_fb_group']['id'] = 'field_course_fb_group';
  $handler->display->display_options['fields']['field_course_fb_group']['table'] = 'field_data_field_course_fb_group';
  $handler->display->display_options['fields']['field_course_fb_group']['field'] = 'field_course_fb_group';
  $handler->display->display_options['fields']['field_course_fb_group']['label'] = '';
  $handler->display->display_options['fields']['field_course_fb_group']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_course_fb_group']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_fb_group']['click_sort_column'] = 'url';
  /* Contextual filter: Innhold: NID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'course' => 'course',
  );
  /* Filter criterion: Innhold: Publisert */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Innhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );

  /* Display: Blokk */
  $handler = $view->new_display('block', 'Blokk', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Innhold: NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Beskrivelse';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'h3';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Felt: Innhold: Hjemmeside */
  $handler->display->display_options['fields']['field_course_homepage']['id'] = 'field_course_homepage';
  $handler->display->display_options['fields']['field_course_homepage']['table'] = 'field_data_field_course_homepage';
  $handler->display->display_options['fields']['field_course_homepage']['field'] = 'field_course_homepage';
  $handler->display->display_options['fields']['field_course_homepage']['label'] = '';
  $handler->display->display_options['fields']['field_course_homepage']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_course_homepage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_homepage']['click_sort_column'] = 'url';
  /* Felt: Innhold: Video */
  $handler->display->display_options['fields']['field_course_video']['id'] = 'field_course_video';
  $handler->display->display_options['fields']['field_course_video']['table'] = 'field_data_field_course_video';
  $handler->display->display_options['fields']['field_course_video']['field'] = 'field_course_video';
  $handler->display->display_options['fields']['field_course_video']['label'] = '';
  $handler->display->display_options['fields']['field_course_video']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_course_video']['alter']['text'] = 'Videoer';
  $handler->display->display_options['fields']['field_course_video']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_course_video']['alter']['path'] = 'node/[nid]/videoer';
  $handler->display->display_options['fields']['field_course_video']['alter']['alt'] = 'Videoer';
  $handler->display->display_options['fields']['field_course_video']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_course_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_video']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_course_video']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_course_video']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_course_video']['delta_offset'] = '0';
  /* Felt: Innhold: Facebook-gruppe */
  $handler->display->display_options['fields']['field_course_fb_group']['id'] = 'field_course_fb_group';
  $handler->display->display_options['fields']['field_course_fb_group']['table'] = 'field_data_field_course_fb_group';
  $handler->display->display_options['fields']['field_course_fb_group']['field'] = 'field_course_fb_group';
  $handler->display->display_options['fields']['field_course_fb_group']['label'] = '';
  $handler->display->display_options['fields']['field_course_fb_group']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_course_fb_group']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_fb_group']['click_sort_column'] = 'url';

  /* Display: Blokk med meldinger */
  $handler = $view->new_display('block', 'Blokk med meldinger', 'block_1');
  $translatables['course_menu'] = array(
    t('Master'),
    t('Emnemeny'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Melding'),
    t('NID'),
    t('Beskrivelse'),
    t('Videoer'),
    t('Meldinger'),
    t('Alle'),
    t('Blokk'),
    t('Blokk med meldinger'),
  );
  $export['course_menu'] = $view;

  $view = new view();
  $view->name = 'courses';
  $view->description = 'Liste over alle emner';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Emner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Emner';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Søk';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nullstill';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér på';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Synkende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_course_code' => 'field_course_code',
    'field_course_name' => 'field_course_name',
    'field_course_lecture' => 'field_course_lecture',
  );
  $handler->display->display_options['style_options']['default'] = 'field_course_code';
  $handler->display->display_options['style_options']['info'] = array(
    'field_course_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_lecture' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Felt: Innhold: NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Felt: Innhold: Kode */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_course_code']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_course_code']['type'] = 'text_plain';
  /* Felt: Innhold: Navn */
  $handler->display->display_options['fields']['field_course_name']['id'] = 'field_course_name';
  $handler->display->display_options['fields']['field_course_name']['table'] = 'field_data_field_course_name';
  $handler->display->display_options['fields']['field_course_name']['field'] = 'field_course_name';
  $handler->display->display_options['fields']['field_course_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_course_name']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_course_name']['type'] = 'text_plain';
  /* Felt: Innhold: Foreleser */
  $handler->display->display_options['fields']['field_course_lecture']['id'] = 'field_course_lecture';
  $handler->display->display_options['fields']['field_course_lecture']['table'] = 'field_data_field_course_lecture';
  $handler->display->display_options['fields']['field_course_lecture']['field'] = 'field_course_lecture';
  $handler->display->display_options['fields']['field_course_lecture']['settings'] = array(
    'link' => 1,
  );
  /* Sorteringskriterium: Innhold: Tittel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Innhold: Publisert */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Innhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );
  /* Filter criterion: Innhold: Tittel */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Søk i kode/navn';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'txt';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'emner';
  $translatables['courses'] = array(
    t('Master'),
    t('Emner'),
    t('mer'),
    t('Søk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('NID'),
    t('Kode'),
    t('Navn'),
    t('Foreleser'),
    t('Søk i kode/navn'),
    t('Page'),
  );
  $export['courses'] = $view;

  $view = new view();
  $view->name = 'courses_given';
  $view->description = 'Liste over alle emner undervist av en foreleser';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Emner - dine';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Foreleste emner';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Bruk';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nullstill';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér på';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Synkende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relasjon: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_course_lecture_target_id']['id'] = 'field_course_lecture_target_id';
  $handler->display->display_options['relationships']['field_course_lecture_target_id']['table'] = 'field_data_field_course_lecture';
  $handler->display->display_options['relationships']['field_course_lecture_target_id']['field'] = 'field_course_lecture_target_id';
  $handler->display->display_options['relationships']['field_course_lecture_target_id']['label'] = 'Foreleser';
  /* Felt: Innhold: Tittel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterium: Innhold: Tittel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Bruker: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'field_course_lecture_target_id';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Innhold: Publisert */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Innhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'panel',
      'context' => 'entity:user.cancel-url',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Bruker: Uid',
    ),
  );
  $translatables['courses_given'] = array(
    t('Master'),
    t('Foreleste emner'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Foreleser'),
    t('Alle'),
    t('Block'),
    t('Content pane'),
    t('View panes'),
  );
  $export['courses_given'] = $view;

  $view = new view();
  $view->name = 'courses_used_in_study';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Emner i studium';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Åpent tilgjengelige emner innenfor dette studieområdet';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Bruk';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nullstill';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér på';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Synkende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_course_code' => 'field_course_code',
    'field_course_name' => 'field_course_name',
    'field_course_lecture' => 'field_course_lecture',
  );
  $handler->display->display_options['style_options']['default'] = 'field_course_code';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_lecture' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relasjon: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_study_courses_target_id']['id'] = 'field_study_courses_target_id';
  $handler->display->display_options['relationships']['field_study_courses_target_id']['table'] = 'field_data_field_study_courses';
  $handler->display->display_options['relationships']['field_study_courses_target_id']['field'] = 'field_study_courses_target_id';
  $handler->display->display_options['relationships']['field_study_courses_target_id']['label'] = 'Emne';
  /* Felt: Innhold: NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_study_courses_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Felt: Innhold: Kode */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['relationship'] = 'field_study_courses_target_id';
  $handler->display->display_options['fields']['field_course_code']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_course_code']['alter']['path'] = 'node/[nid]';
  /* Felt: Innhold: Navn */
  $handler->display->display_options['fields']['field_course_name']['id'] = 'field_course_name';
  $handler->display->display_options['fields']['field_course_name']['table'] = 'field_data_field_course_name';
  $handler->display->display_options['fields']['field_course_name']['field'] = 'field_course_name';
  $handler->display->display_options['fields']['field_course_name']['relationship'] = 'field_study_courses_target_id';
  $handler->display->display_options['fields']['field_course_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_course_name']['alter']['path'] = 'node/[nid]';
  /* Felt: Innhold: Foreleser */
  $handler->display->display_options['fields']['field_course_lecture']['id'] = 'field_course_lecture';
  $handler->display->display_options['fields']['field_course_lecture']['table'] = 'field_data_field_course_lecture';
  $handler->display->display_options['fields']['field_course_lecture']['field'] = 'field_course_lecture';
  $handler->display->display_options['fields']['field_course_lecture']['relationship'] = 'field_study_courses_target_id';
  $handler->display->display_options['fields']['field_course_lecture']['settings'] = array(
    'link' => 1,
  );
  /* Sorteringskriterium: Innhold: Tittel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_study_courses_target_id';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Innhold: NID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_course_consumers_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'study' => 'study',
  );
  /* Filter criterion: Innhold: Publisert */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_study_courses_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Innhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_study_courses_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['courses_used_in_study'] = array(
    t('Master'),
    t('Åpent tilgjengelige emner innenfor dette studieområdet'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Emne'),
    t('Kode'),
    t('Navn'),
    t('Foreleser'),
    t('Alle'),
    t('Block'),
  );
  $export['courses_used_in_study'] = $view;

  $view = new view();
  $view->name = 'courses_used_in_studyplan';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Emner i studieplan';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Relevant emner i dette studiet';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mer';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Bruk';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Nullstill';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér på';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Synkende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_course_code' => 'field_course_code',
    'field_course_name' => 'field_course_name',
    'field_course_lecture' => 'field_course_lecture',
  );
  $handler->display->display_options['style_options']['default'] = 'field_course_code';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_lecture' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relasjon: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_course_consumers_target_id']['id'] = 'field_course_consumers_target_id';
  $handler->display->display_options['relationships']['field_course_consumers_target_id']['table'] = 'field_data_field_course_consumers';
  $handler->display->display_options['relationships']['field_course_consumers_target_id']['field'] = 'field_course_consumers_target_id';
  $handler->display->display_options['relationships']['field_course_consumers_target_id']['label'] = 'Studieplan';
  /* Felt: Innhold: NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Felt: Innhold: Kode */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_course_code']['alter']['path'] = 'node/[nid]';
  /* Felt: Innhold: Navn */
  $handler->display->display_options['fields']['field_course_name']['id'] = 'field_course_name';
  $handler->display->display_options['fields']['field_course_name']['table'] = 'field_data_field_course_name';
  $handler->display->display_options['fields']['field_course_name']['field'] = 'field_course_name';
  $handler->display->display_options['fields']['field_course_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_course_name']['alter']['path'] = 'node/[nid]';
  /* Felt: Innhold: Foreleser */
  $handler->display->display_options['fields']['field_course_lecture']['id'] = 'field_course_lecture';
  $handler->display->display_options['fields']['field_course_lecture']['table'] = 'field_data_field_course_lecture';
  $handler->display->display_options['fields']['field_course_lecture']['field'] = 'field_course_lecture';
  $handler->display->display_options['fields']['field_course_lecture']['settings'] = array(
    'link' => 1,
  );
  /* Sorteringskriterium: Innhold: Tittel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Innhold: NID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_course_consumers_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'studyplan' => 'studyplan',
  );
  /* Filter criterion: Innhold: Publisert */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Innhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'course' => 'course',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['courses_used_in_studyplan'] = array(
    t('Master'),
    t('Relevant emner i dette studiet'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Studieplan'),
    t('Kode'),
    t('Navn'),
    t('Foreleser'),
    t('Alle'),
    t('Block'),
  );
  $export['courses_used_in_studyplan'] = $view;

  return $export;
}
