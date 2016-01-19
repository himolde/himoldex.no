<?php
/**
 * @file
 * himolder_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function himolder_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'research_group_information';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Forskningsgruppeinformasjon';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Medlemmer';
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
    'research_group' => 'research_group',
  );

  /* Display: Medlemmer */
  $handler = $view->new_display('block', 'Medlemmer', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Bruker: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_course_lecture_target_id';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['path'] = 'user/[uid]?width=600&height=600';
  $handler->display->display_options['fields']['name']['alter']['link_class'] = 'colorbox-node';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;

  /* Display: Promovideo */
  $handler = $view->new_display('block', 'Promovideo', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $translatables['research_group_information'] = array(
    t('Master'),
    t('Medlemmer'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Foreleser'),
    t('Promovideo'),
    t('Alle'),
  );
  $export['research_group_information'] = $view;

  $view = new view();
  $view->name = 'research_group_menu';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Forskningsgruppemeny';
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
    'research_group' => 'research_group',
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
    'research_group' => 'research_group',
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
  /* Felt: Innhold: Åpent */
  $handler->display->display_options['fields']['field_course_open']['id'] = 'field_course_open';
  $handler->display->display_options['fields']['field_course_open']['table'] = 'field_data_field_course_open';
  $handler->display->display_options['fields']['field_course_open']['field'] = 'field_course_open';
  $handler->display->display_options['fields']['field_course_open']['label'] = '';
  $handler->display->display_options['fields']['field_course_open']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_open']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_open']['empty'] = '1';
  $handler->display->display_options['fields']['field_course_open']['type'] = 'list_key';
  /* Felt: Visninger: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['views_conditional']['element_wrapper_class'] = 'course-locked';
  $handler->display->display_options['fields']['views_conditional']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_course_open';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = '0';
  $handler->display->display_options['fields']['views_conditional']['then'] = '<img id=\'lock-locked\' src=\'/sites/all/themes/himoldex/icons/lock-512.png\' />';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = ' About';
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
  $handler->display->display_options['fields']['field_course_video']['alter']['text'] = 'Videos';
  $handler->display->display_options['fields']['field_course_video']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_course_video']['alter']['path'] = 'node/[nid]/videos';
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
  $translatables['research_group_menu'] = array(
    t('Master'),
    t('Emnemeny'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('NID'),
    t('Beskrivelse'),
    t('Videoer'),
    t('Meldinger'),
    t('Alle'),
    t('Blokk'),
    t('1'),
    t(' About'),
    t('Videos'),
  );
  $export['research_group_menu'] = $view;

  $view = new view();
  $view->name = 'research_videos';
  $view->description = 'Lister over alle videoer i et emne';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Forskningsvideoer';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Research Videos';
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
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_video_topic_1' => 'field_video_topic_1',
    'field_video_type' => 'field_video_type',
    'field_video_youtube_1' => 'field_video_youtube_1',
    'field_video_youtube' => 'field_video_youtube_1',
    'field_video_mediasite' => 'field_video_youtube_1',
    'field_video_dato' => 'field_video_dato',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_video_topic_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_video_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_video_youtube_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_video_youtube' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_video_mediasite' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_video_dato' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relasjon: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_course_video_node']['id'] = 'reverse_field_course_video_node';
  $handler->display->display_options['relationships']['reverse_field_course_video_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_course_video_node']['field'] = 'reverse_field_course_video_node';
  $handler->display->display_options['relationships']['reverse_field_course_video_node']['label'] = 'Emne som refererer til video';
  /* Felt: Innhold: NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Felt: Innhold: Tema */
  $handler->display->display_options['fields']['field_video_topic_1']['id'] = 'field_video_topic_1';
  $handler->display->display_options['fields']['field_video_topic_1']['table'] = 'field_data_field_video_topic';
  $handler->display->display_options['fields']['field_video_topic_1']['field'] = 'field_video_topic';
  $handler->display->display_options['fields']['field_video_topic_1']['label'] = 'Tema (ikke lenke)';
  $handler->display->display_options['fields']['field_video_topic_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_topic_1']['type'] = 'text_plain';
  /* Felt: Innhold: Youtube */
  $handler->display->display_options['fields']['field_video_youtube_1']['id'] = 'field_video_youtube_1';
  $handler->display->display_options['fields']['field_video_youtube_1']['table'] = 'field_data_field_video_youtube';
  $handler->display->display_options['fields']['field_video_youtube_1']['field'] = 'field_video_youtube';
  $handler->display->display_options['fields']['field_video_youtube_1']['label'] = ' Topic';
  $handler->display->display_options['fields']['field_video_youtube_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_youtube_1']['alter']['text'] = '[field_video_topic_1]';
  $handler->display->display_options['fields']['field_video_youtube_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_youtube_1']['alter']['path'] = 'node/[nid]?width=700&height=650';
  $handler->display->display_options['fields']['field_video_youtube_1']['alter']['link_class'] = 'colorbox-node yt_desktop';
  $handler->display->display_options['fields']['field_video_youtube_1']['click_sort_column'] = 'input';
  $handler->display->display_options['fields']['field_video_youtube_1']['settings'] = array(
    'youtube_size' => '420x315',
    'youtube_width' => '',
    'youtube_height' => '',
    'youtube_autoplay' => 0,
    'youtube_showinfo' => 0,
    'youtube_controls' => 0,
    'youtube_autohide' => 0,
    'youtube_iv_load_policy' => 0,
  );
  /* Felt: Innhold: Youtube */
  $handler->display->display_options['fields']['field_video_youtube']['id'] = 'field_video_youtube';
  $handler->display->display_options['fields']['field_video_youtube']['table'] = 'field_data_field_video_youtube';
  $handler->display->display_options['fields']['field_video_youtube']['field'] = 'field_video_youtube';
  $handler->display->display_options['fields']['field_video_youtube']['label'] = 'Youtube for mobil';
  $handler->display->display_options['fields']['field_video_youtube']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_youtube']['alter']['text'] = '[field_video_topic_1]';
  $handler->display->display_options['fields']['field_video_youtube']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_youtube']['alter']['path'] = 'https://www.youtube.com/watch?v=[field_video_youtube-video_id]';
  $handler->display->display_options['fields']['field_video_youtube']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_video_youtube']['alter']['link_class'] = 'yt_not_desktop';
  $handler->display->display_options['fields']['field_video_youtube']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_video_youtube']['click_sort_column'] = 'input';
  $handler->display->display_options['fields']['field_video_youtube']['settings'] = array(
    'youtube_size' => '420x315',
    'youtube_width' => '',
    'youtube_height' => '',
    'youtube_autoplay' => 0,
    'youtube_showinfo' => 0,
    'youtube_controls' => 0,
    'youtube_autohide' => 0,
    'youtube_iv_load_policy' => 0,
  );
  /* Felt: Innhold: Mediasite */
  $handler->display->display_options['fields']['field_video_mediasite']['id'] = 'field_video_mediasite';
  $handler->display->display_options['fields']['field_video_mediasite']['table'] = 'field_data_field_video_mediasite';
  $handler->display->display_options['fields']['field_video_mediasite']['field'] = 'field_video_mediasite';
  $handler->display->display_options['fields']['field_video_mediasite']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_mediasite']['alter']['text'] = '[field_video_topic_1]';
  $handler->display->display_options['fields']['field_video_mediasite']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_mediasite']['alter']['path'] = '[field_video_mediasite]';
  $handler->display->display_options['fields']['field_video_mediasite']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_video_mediasite']['hide_empty'] = TRUE;
  /* Felt: Innhold: Dato */
  $handler->display->display_options['fields']['field_video_dato']['id'] = 'field_video_dato';
  $handler->display->display_options['fields']['field_video_dato']['table'] = 'field_data_field_video_dato';
  $handler->display->display_options['fields']['field_video_dato']['field'] = 'field_video_dato';
  $handler->display->display_options['fields']['field_video_dato']['label'] = ' Date';
  $handler->display->display_options['fields']['field_video_dato']['settings'] = array(
    'format_type' => 'shortest',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Innhold: Rediger lenke */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sorteringskriterium: Innhold: Dato (field_video_dato) */
  $handler->display->display_options['sorts']['field_video_dato_value']['id'] = 'field_video_dato_value';
  $handler->display->display_options['sorts']['field_video_dato_value']['table'] = 'field_data_field_video_dato';
  $handler->display->display_options['sorts']['field_video_dato_value']['field'] = 'field_video_dato_value';
  $handler->display->display_options['sorts']['field_video_dato_value']['order'] = 'DESC';
  /* Sorteringskriterium: Innhold: Video (field_course_video:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_course_video';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  $handler->display->display_options['sorts']['delta']['order'] = 'DESC';
  /* Contextual filter: Innhold: NID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_course_video_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = 'Videos by the %1 group';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'research_group' => 'research_group',
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
    'video' => 'video',
  );

  /* Display: Videoer */
  $handler = $view->new_display('page', 'Videoer', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Innhold: Dato (field_video_dato) */
  $handler->display->display_options['filters']['field_video_dato_value']['id'] = 'field_video_dato_value';
  $handler->display->display_options['filters']['field_video_dato_value']['table'] = 'field_data_field_video_dato';
  $handler->display->display_options['filters']['field_video_dato_value']['field'] = 'field_video_dato_value';
  $handler->display->display_options['filters']['field_video_dato_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_video_dato_value']['expose']['operator_id'] = 'field_video_dato_value_op';
  $handler->display->display_options['filters']['field_video_dato_value']['expose']['label'] = ' Year';
  $handler->display->display_options['filters']['field_video_dato_value']['expose']['operator'] = 'field_video_dato_value_op';
  $handler->display->display_options['filters']['field_video_dato_value']['expose']['identifier'] = 'period';
  $handler->display->display_options['filters']['field_video_dato_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_video_dato_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_video_dato_value']['year_range'] = '2013:2016';
  $handler->display->display_options['path'] = 'node/%/videos';
  $handler->display->display_options['menu']['title'] = 'Videoer';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['research_videos'] = array(
    t('Master'),
    t('Research Videos'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Emne som refererer til video'),
    t('NID'),
    t('Tema (ikke lenke)'),
    t(' Topic'),
    t('[field_video_topic_1]'),
    t('Youtube for mobil'),
    t('Mediasite'),
    t(' Date'),
    t('Alle'),
    t('Videos by the %1 group'),
    t('Videoer'),
    t(' Year'),
  );
  $export['research_videos'] = $view;

  return $export;
}
