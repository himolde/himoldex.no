<?php
/**
 * @file
 * himoldex_views_video.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function himoldex_views_video_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Videoer - alle';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Alle videoer';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer per side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'neste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'siste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_course_code' => 'field_course_code',
    'nid_1' => 'nid_1',
    'title' => 'title',
    'field_video_youtube' => 'field_video_youtube',
    'field_video_youtube_1' => 'field_video_youtube',
    'field_video_mediasite' => 'field_video_youtube',
    'field_video_dato' => 'field_video_dato',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
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
    'field_course_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'field_video_youtube' => array(
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
    'edit_node' => array(
      'align' => '',
      'separator' => ' / ',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relasjon: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_course_video_node']['id'] = 'reverse_field_course_video_node';
  $handler->display->display_options['relationships']['reverse_field_course_video_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_course_video_node']['field'] = 'reverse_field_course_video_node';
  $handler->display->display_options['relationships']['reverse_field_course_video_node']['label'] = 'Emne';
  /* Felt: Innhold: NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_course_video_node';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Felt: Innhold: Kode */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['relationship'] = 'reverse_field_course_video_node';
  $handler->display->display_options['fields']['field_course_code']['label'] = 'Emnekode';
  $handler->display->display_options['fields']['field_course_code']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_course_code']['alter']['path'] = 'node/[nid]';
  /* Felt: Innhold: NID */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
  /* Felt: Innhold: Tittel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Tittel (skjult)';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Felt: Innhold: Youtube */
  $handler->display->display_options['fields']['field_video_youtube']['id'] = 'field_video_youtube';
  $handler->display->display_options['fields']['field_video_youtube']['table'] = 'field_data_field_video_youtube';
  $handler->display->display_options['fields']['field_video_youtube']['field'] = 'field_video_youtube';
  $handler->display->display_options['fields']['field_video_youtube']['label'] = 'Tittel';
  $handler->display->display_options['fields']['field_video_youtube']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_youtube']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['field_video_youtube']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_youtube']['alter']['path'] = 'node/[nid_1]?width=700&height=650';
  $handler->display->display_options['fields']['field_video_youtube']['alter']['link_class'] = 'colorbox-node yt_desktop';
  $handler->display->display_options['fields']['field_video_youtube']['hide_empty'] = TRUE;
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
  /* Felt: Innhold: Youtube */
  $handler->display->display_options['fields']['field_video_youtube_1']['id'] = 'field_video_youtube_1';
  $handler->display->display_options['fields']['field_video_youtube_1']['table'] = 'field_data_field_video_youtube';
  $handler->display->display_options['fields']['field_video_youtube_1']['field'] = 'field_video_youtube';
  $handler->display->display_options['fields']['field_video_youtube_1']['label'] = 'Youtube for mobil';
  $handler->display->display_options['fields']['field_video_youtube_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_youtube_1']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['field_video_youtube_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_youtube_1']['alter']['path'] = 'https://www.youtube.com/watch?v=[field_video_youtube_1-video_id]';
  $handler->display->display_options['fields']['field_video_youtube_1']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_video_youtube_1']['alter']['link_class'] = 'yt_not_desktop';
  $handler->display->display_options['fields']['field_video_youtube_1']['alter']['target'] = '_blank';
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
  /* Felt: Innhold: Mediasite */
  $handler->display->display_options['fields']['field_video_mediasite']['id'] = 'field_video_mediasite';
  $handler->display->display_options['fields']['field_video_mediasite']['table'] = 'field_data_field_video_mediasite';
  $handler->display->display_options['fields']['field_video_mediasite']['field'] = 'field_video_mediasite';
  $handler->display->display_options['fields']['field_video_mediasite']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_mediasite']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['field_video_mediasite']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_mediasite']['alter']['path'] = '[field_video_mediasite]';
  $handler->display->display_options['fields']['field_video_mediasite']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_video_mediasite']['hide_empty'] = TRUE;
  /* Felt: Innhold: Dato */
  $handler->display->display_options['fields']['field_video_dato']['id'] = 'field_video_dato';
  $handler->display->display_options['fields']['field_video_dato']['table'] = 'field_data_field_video_dato';
  $handler->display->display_options['fields']['field_video_dato']['field'] = 'field_video_dato';
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
  /* Felt: Innhold: Slett lenke */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Sorteringskriterium: Innhold: Kode (field_course_code) */
  $handler->display->display_options['sorts']['field_course_code_value']['id'] = 'field_course_code_value';
  $handler->display->display_options['sorts']['field_course_code_value']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['sorts']['field_course_code_value']['field'] = 'field_course_code_value';
  $handler->display->display_options['sorts']['field_course_code_value']['relationship'] = 'reverse_field_course_video_node';
  /* Sorteringskriterium: Innhold: Dato (field_video_dato) */
  $handler->display->display_options['sorts']['field_video_dato_value']['id'] = 'field_video_dato_value';
  $handler->display->display_options['sorts']['field_video_dato_value']['table'] = 'field_data_field_video_dato';
  $handler->display->display_options['sorts']['field_video_dato_value']['field'] = 'field_video_dato_value';
  $handler->display->display_options['sorts']['field_video_dato_value']['order'] = 'DESC';
  /* Sorteringskriterium: Innhold: Innleggsdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Innhold: Type (field_video_type) */
  $handler->display->display_options['filters']['field_video_type_value']['id'] = 'field_video_type_value';
  $handler->display->display_options['filters']['field_video_type_value']['table'] = 'field_data_field_video_type';
  $handler->display->display_options['filters']['field_video_type_value']['field'] = 'field_video_type_value';
  $handler->display->display_options['filters']['field_video_type_value']['value'] = array(
    'lecture' => 'lecture',
  );
  $handler->display->display_options['filters']['field_video_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_video_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_video_type_value']['expose']['operator_id'] = 'field_video_type_value_op';
  $handler->display->display_options['filters']['field_video_type_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_video_type_value']['expose']['operator'] = 'field_video_type_value_op';
  $handler->display->display_options['filters']['field_video_type_value']['expose']['identifier'] = 'videotype';
  $handler->display->display_options['filters']['field_video_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Søk: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Søk';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'videoer';
  $translatables['all_videos'] = array(
    t('Master'),
    t('Alle videoer'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Elementer per side'),
    t('- Alle -'),
    t('Offset'),
    t('« første'),
    t('‹ forrige'),
    t('neste ›'),
    t('siste »'),
    t('Emne'),
    t('nid'),
    t('Emnekode'),
    t('Tittel (skjult)'),
    t('Tittel'),
    t('[title]'),
    t('Youtube for mobil'),
    t('Mediasite'),
    t('Dato'),
    t('Type'),
    t('Søk'),
    t('Page'),
  );
  $export['all_videos'] = $view;

  $view = new view();
  $view->name = 'video_field_picker';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Video - feltvelger';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer per side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'neste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'siste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relasjon: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_course_video_node']['id'] = 'reverse_field_course_video_node';
  $handler->display->display_options['relationships']['reverse_field_course_video_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_course_video_node']['field'] = 'reverse_field_course_video_node';
  $handler->display->display_options['relationships']['reverse_field_course_video_node']['label'] = 'Emne';
  /* Felt: Innhold: Tittel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Sorteringskriterium: Innhold: Kode (field_course_code) */
  $handler->display->display_options['sorts']['field_course_code_value']['id'] = 'field_course_code_value';
  $handler->display->display_options['sorts']['field_course_code_value']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['sorts']['field_course_code_value']['field'] = 'field_course_code_value';
  $handler->display->display_options['sorts']['field_course_code_value']['relationship'] = 'reverse_field_course_video_node';
  /* Sorteringskriterium: Innhold: Tittel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  /* Filter criterion: Innhold: Type (field_video_type) */
  $handler->display->display_options['filters']['field_video_type_value']['id'] = 'field_video_type_value';
  $handler->display->display_options['filters']['field_video_type_value']['table'] = 'field_data_field_video_type';
  $handler->display->display_options['filters']['field_video_type_value']['field'] = 'field_video_type_value';
  $handler->display->display_options['filters']['field_video_type_value']['value'] = array(
    'info' => 'info',
  );

  /* Display: Informasjonsvideo */
  $handler = $view->new_display('entityreference', 'Informasjonsvideo', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Emnevideoer */
  $handler = $view->new_display('entityreference', 'Emnevideoer', 'entityreference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_course_code' => 'field_course_code',
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Innhold: Kode */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['relationship'] = 'reverse_field_course_video_node';
  $handler->display->display_options['fields']['field_course_code']['label'] = '';
  $handler->display->display_options['fields']['field_course_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_code']['empty'] = '----';
  /* Felt: Innhold: Tittel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
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
  $translatables['video_field_picker'] = array(
    t('Master'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Elementer per side'),
    t('- Alle -'),
    t('Offset'),
    t('« første'),
    t('‹ forrige'),
    t('neste ›'),
    t('siste »'),
    t('Emne'),
    t('Informasjonsvideo'),
    t('Emnevideoer'),
    t('----'),
  );
  $export['video_field_picker'] = $view;

  $view = new view();
  $view->name = 'videos';
  $view->description = 'Lister over alle videoer i et emne';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Videoer';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Videoer';
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
  /* Felt: Innhold: Type */
  $handler->display->display_options['fields']['field_video_type']['id'] = 'field_video_type';
  $handler->display->display_options['fields']['field_video_type']['table'] = 'field_data_field_video_type';
  $handler->display->display_options['fields']['field_video_type']['field'] = 'field_video_type';
  /* Felt: Innhold: Youtube */
  $handler->display->display_options['fields']['field_video_youtube_1']['id'] = 'field_video_youtube_1';
  $handler->display->display_options['fields']['field_video_youtube_1']['table'] = 'field_data_field_video_youtube';
  $handler->display->display_options['fields']['field_video_youtube_1']['field'] = 'field_video_youtube';
  $handler->display->display_options['fields']['field_video_youtube_1']['label'] = 'Tema';
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
  $handler->display->display_options['fields']['field_video_dato']['settings'] = array(
    'format_type' => 'shortest',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
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
  $handler->display->display_options['arguments']['nid']['title'] = 'Videoer i %1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
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
    'video' => 'video',
  );

  /* Display: Forelesninger */
  $handler = $view->new_display('page', 'Forelesninger', 'page');
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
  /* Filter criterion: Innhold: Type (field_video_type) */
  $handler->display->display_options['filters']['field_video_type_value']['id'] = 'field_video_type_value';
  $handler->display->display_options['filters']['field_video_type_value']['table'] = 'field_data_field_video_type';
  $handler->display->display_options['filters']['field_video_type_value']['field'] = 'field_video_type_value';
  $handler->display->display_options['filters']['field_video_type_value']['value'] = array(
    'lecture' => 'lecture',
  );
  $handler->display->display_options['path'] = 'node/%/forelesninger';
  $handler->display->display_options['menu']['title'] = 'Forelesninger';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Kortvideoer */
  $handler = $view->new_display('page', 'Kortvideoer', 'page_1');
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
  /* Filter criterion: Innhold: Type (field_video_type) */
  $handler->display->display_options['filters']['field_video_type_value']['id'] = 'field_video_type_value';
  $handler->display->display_options['filters']['field_video_type_value']['table'] = 'field_data_field_video_type';
  $handler->display->display_options['filters']['field_video_type_value']['field'] = 'field_video_type_value';
  $handler->display->display_options['filters']['field_video_type_value']['value'] = array(
    'short' => 'short',
  );
  $handler->display->display_options['path'] = 'node/%/kortvideoer';
  $handler->display->display_options['menu']['title'] = 'Kortvideoer';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Løsningsvideoer */
  $handler = $view->new_display('page', 'Løsningsvideoer', 'page_2');
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
  /* Filter criterion: Innhold: Type (field_video_type) */
  $handler->display->display_options['filters']['field_video_type_value']['id'] = 'field_video_type_value';
  $handler->display->display_options['filters']['field_video_type_value']['table'] = 'field_data_field_video_type';
  $handler->display->display_options['filters']['field_video_type_value']['field'] = 'field_video_type_value';
  $handler->display->display_options['filters']['field_video_type_value']['value'] = array(
    'solution' => 'solution',
  );
  $handler->display->display_options['path'] = 'node/%/losningsvideoer';
  $handler->display->display_options['menu']['title'] = 'Løsningsvideoer';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Videoer */
  $handler = $view->new_display('page', 'Videoer', 'page_3');
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
  /* Filter criterion: Innhold: Type (field_video_type) */
  $handler->display->display_options['filters']['field_video_type_value']['id'] = 'field_video_type_value';
  $handler->display->display_options['filters']['field_video_type_value']['table'] = 'field_data_field_video_type';
  $handler->display->display_options['filters']['field_video_type_value']['field'] = 'field_video_type_value';
  $handler->display->display_options['filters']['field_video_type_value']['value'] = array(
    'lecture' => 'lecture',
  );
  $handler->display->display_options['filters']['field_video_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_video_type_value']['expose']['operator_id'] = 'field_video_type_value_op';
  $handler->display->display_options['filters']['field_video_type_value']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_video_type_value']['expose']['operator'] = 'field_video_type_value_op';
  $handler->display->display_options['filters']['field_video_type_value']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['field_video_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  /* Filter criterion: Innhold: Dato (field_video_dato) */
  $handler->display->display_options['filters']['field_video_dato_value']['id'] = 'field_video_dato_value';
  $handler->display->display_options['filters']['field_video_dato_value']['table'] = 'field_data_field_video_dato';
  $handler->display->display_options['filters']['field_video_dato_value']['field'] = 'field_video_dato_value';
  $handler->display->display_options['filters']['field_video_dato_value']['value']['value'] = '2015';
  $handler->display->display_options['filters']['field_video_dato_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_video_dato_value']['expose']['operator_id'] = 'field_video_dato_value_op';
  $handler->display->display_options['filters']['field_video_dato_value']['expose']['label'] = 'År';
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
  $handler->display->display_options['filters']['field_video_dato_value']['year_range'] = '2013:2015';
  $handler->display->display_options['path'] = 'node/%/videoer';
  $handler->display->display_options['menu']['title'] = 'Videoer';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['videos'] = array(
    t('Master'),
    t('Videoer'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Emne som refererer til video'),
    t('NID'),
    t('Tema (ikke lenke)'),
    t('Type'),
    t('Tema'),
    t('[field_video_topic_1]'),
    t('Youtube for mobil'),
    t('Mediasite'),
    t('Dato'),
    t('Alle'),
    t('Videoer i %1'),
    t('Forelesninger'),
    t('Kortvideoer'),
    t('Løsningsvideoer'),
    t('År'),
  );
  $export['videos'] = $view;

  $view = new view();
  $view->name = 'videos_last';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Videoer - siste';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'De siste videoene';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '8';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_course_code' => 'field_course_code',
    'title' => 'title',
    'field_video_dato' => 'field_video_dato',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relasjon: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_course_video_node']['id'] = 'reverse_field_course_video_node';
  $handler->display->display_options['relationships']['reverse_field_course_video_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_course_video_node']['field'] = 'reverse_field_course_video_node';
  $handler->display->display_options['relationships']['reverse_field_course_video_node']['label'] = 'Emne';
  /* Felt: Innhold: NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_course_video_node';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Felt: Innhold: Kode */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['relationship'] = 'reverse_field_course_video_node';
  $handler->display->display_options['fields']['field_course_code']['label'] = '';
  $handler->display->display_options['fields']['field_course_code']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_course_code']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_course_code']['alter']['suffix'] = '&nbsp;-';
  $handler->display->display_options['fields']['field_course_code']['element_label_colon'] = FALSE;
  /* Felt: Innhold: Dato */
  $handler->display->display_options['fields']['field_video_dato']['id'] = 'field_video_dato';
  $handler->display->display_options['fields']['field_video_dato']['table'] = 'field_data_field_video_dato';
  $handler->display->display_options['fields']['field_video_dato']['field'] = 'field_video_dato';
  $handler->display->display_options['fields']['field_video_dato']['label'] = '';
  $handler->display->display_options['fields']['field_video_dato']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_dato']['alter']['text'] = '([field_video_dato])';
  $handler->display->display_options['fields']['field_video_dato']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_dato']['settings'] = array(
    'format_type' => 'shortest',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Innhold: NID */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_rel'] = '';
  /* Felt: Tittel (ikke lenke) */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'Tittel (ikke lenke)';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
  /* Felt: Innhold: Youtube */
  $handler->display->display_options['fields']['field_video_youtube']['id'] = 'field_video_youtube';
  $handler->display->display_options['fields']['field_video_youtube']['table'] = 'field_data_field_video_youtube';
  $handler->display->display_options['fields']['field_video_youtube']['field'] = 'field_video_youtube';
  $handler->display->display_options['fields']['field_video_youtube']['label'] = '';
  $handler->display->display_options['fields']['field_video_youtube']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_youtube']['alter']['text'] = '[title_1]';
  $handler->display->display_options['fields']['field_video_youtube']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_youtube']['alter']['path'] = 'node/[nid_1]?width=700&height=650';
  $handler->display->display_options['fields']['field_video_youtube']['alter']['link_class'] = 'colorbox-node yt_desktop';
  $handler->display->display_options['fields']['field_video_youtube']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_youtube']['hide_empty'] = TRUE;
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
  /* Felt: Innhold: Youtube */
  $handler->display->display_options['fields']['field_video_youtube_1']['id'] = 'field_video_youtube_1';
  $handler->display->display_options['fields']['field_video_youtube_1']['table'] = 'field_data_field_video_youtube';
  $handler->display->display_options['fields']['field_video_youtube_1']['field'] = 'field_video_youtube';
  $handler->display->display_options['fields']['field_video_youtube_1']['label'] = '';
  $handler->display->display_options['fields']['field_video_youtube_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_youtube_1']['alter']['text'] = '[title_1]';
  $handler->display->display_options['fields']['field_video_youtube_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_youtube_1']['alter']['path'] = 'https://www.youtube.com/watch?v=[field_video_youtube_1-video_id]';
  $handler->display->display_options['fields']['field_video_youtube_1']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_video_youtube_1']['alter']['link_class'] = 'yt_not_desktop';
  $handler->display->display_options['fields']['field_video_youtube_1']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_video_youtube_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_youtube_1']['hide_empty'] = TRUE;
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
  /* Felt: Innhold: Mediasite */
  $handler->display->display_options['fields']['field_video_mediasite']['id'] = 'field_video_mediasite';
  $handler->display->display_options['fields']['field_video_mediasite']['table'] = 'field_data_field_video_mediasite';
  $handler->display->display_options['fields']['field_video_mediasite']['field'] = 'field_video_mediasite';
  $handler->display->display_options['fields']['field_video_mediasite']['label'] = '';
  $handler->display->display_options['fields']['field_video_mediasite']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_mediasite']['alter']['text'] = '[title_1]';
  $handler->display->display_options['fields']['field_video_mediasite']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_video_mediasite']['alter']['path'] = '[field_video_mediasite]';
  $handler->display->display_options['fields']['field_video_mediasite']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_video_mediasite']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_video_mediasite']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_mediasite']['hide_empty'] = TRUE;
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
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';

  /* Display: Blokk */
  $handler = $view->new_display('block', 'Blokk', 'block_1');

  /* Display: Side */
  $handler = $view->new_display('page', 'Side', 'page_1');
  $handler->display->display_options['path'] = 'innbygging/siste-videoer';
  $translatables['videos_last'] = array(
    t('Master'),
    t('De siste videoene'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Emne'),
    t('&nbsp;-'),
    t('([field_video_dato])'),
    t('[title_1]'),
    t('Type'),
    t('Blokk'),
    t('Side'),
  );
  $export['videos_last'] = $view;

  $view = new view();
  $view->name = 'videos_unused';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ubrukte videoer';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ubrukte videoer';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer per side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'neste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'siste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_course_code' => 'field_course_code',
    'title' => 'title',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_course_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relasjon: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_course_video_node']['id'] = 'reverse_field_course_video_node';
  $handler->display->display_options['relationships']['reverse_field_course_video_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_course_video_node']['field'] = 'reverse_field_course_video_node';
  $handler->display->display_options['relationships']['reverse_field_course_video_node']['label'] = 'Emne';
  /* Felt: Innhold: Kode */
  $handler->display->display_options['fields']['field_course_code']['id'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['fields']['field_course_code']['field'] = 'field_course_code';
  $handler->display->display_options['fields']['field_course_code']['relationship'] = 'reverse_field_course_video_node';
  /* Felt: Innhold: Tittel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Innhold: Slett lenke */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  /* Sorteringskriterium: Innhold: Tittel */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sorteringskriterium: Innhold: Kode (field_course_code) */
  $handler->display->display_options['sorts']['field_course_code_value']['id'] = 'field_course_code_value';
  $handler->display->display_options['sorts']['field_course_code_value']['table'] = 'field_data_field_course_code';
  $handler->display->display_options['sorts']['field_course_code_value']['field'] = 'field_course_code_value';
  $handler->display->display_options['sorts']['field_course_code_value']['relationship'] = 'reverse_field_course_video_node';
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
  /* Filter criterion: Innhold: Tittel */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Tittel';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/videos';
  $translatables['videos_unused'] = array(
    t('Master'),
    t('Ubrukte videoer'),
    t('mer'),
    t('Bruk'),
    t('Nullstill'),
    t('Sortér på'),
    t('Stigende'),
    t('Synkende'),
    t('Elementer per side'),
    t('- Alle -'),
    t('Offset'),
    t('« første'),
    t('‹ forrige'),
    t('neste ›'),
    t('siste »'),
    t('Emne'),
    t('Kode'),
    t('Tittel'),
    t('Slett lenke'),
    t('Page'),
  );
  $export['videos_unused'] = $view;

  return $export;
}
