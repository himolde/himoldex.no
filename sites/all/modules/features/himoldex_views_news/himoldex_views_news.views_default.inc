<?php
/**
 * @file
 * himoldex_views_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function himoldex_views_news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Nyheter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nyheter';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Topptekst: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Felt: Innhold: Tittel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
    'news' => 'news',
  );
  /* Filter criterion: Innhold: Emne (field_course) */
  $handler->display->display_options['filters']['field_course_target_id']['id'] = 'field_course_target_id';
  $handler->display->display_options['filters']['field_course_target_id']['table'] = 'field_data_field_course';
  $handler->display->display_options['filters']['field_course_target_id']['field'] = 'field_course_target_id';
  $handler->display->display_options['filters']['field_course_target_id']['operator'] = 'empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Alle nyheter og kunngjøringer';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'nyheter';

  /* Display: Strøm */
  $handler = $view->new_display('feed', 'Strøm', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'HiMoldeX - nyheter';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['description'] = 'Siste nyheter om HiMoldeX';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  $handler->display->display_options['row_options']['link_field'] = 'nid';
  $handler->display->display_options['row_options']['description_field'] = 'view_node';
  $handler->display->display_options['row_options']['creator_field'] = 'nothing';
  $handler->display->display_options['row_options']['date_field'] = 'created';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'nid',
    'guid_field_is_permalink' => 1,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Innhold: Tittel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Felt: Innhold: Innhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Brødtekst';
  /* Felt: Forfatter */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Forfatter';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Redaktør for HiMoldeX';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Felt: Innhold: Innleggsdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'r';
  /* Felt: Innhold: NID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'node/[nid]';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Felt: Innhold: Lenke */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Les nyheten';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['view_node']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['path'] = 'nyheter.xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block' => 0,
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Blokk for kunngjøringer */
  $handler = $view->new_display('block', 'Blokk for kunngjøringer', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Siste kunngjøringer';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Topptekst: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="block-title"><a href="/nyheter">Siste kunngjøringer</a></h2>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
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
    'news' => 'news',
  );
  /* Filter criterion: Innhold: Emne (field_course) */
  $handler->display->display_options['filters']['field_course_target_id']['id'] = 'field_course_target_id';
  $handler->display->display_options['filters']['field_course_target_id']['table'] = 'field_data_field_course';
  $handler->display->display_options['filters']['field_course_target_id']['field'] = 'field_course_target_id';
  $handler->display->display_options['filters']['field_course_target_id']['operator'] = 'empty';
  $translatables['news'] = array(
    t('Master'),
    t('Nyheter'),
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
    t('Page'),
    t('Alle nyheter og kunngjøringer'),
    t('Strøm'),
    t('HiMoldeX - nyheter'),
    t('Brødtekst'),
    t('Redaktør for HiMoldeX'),
    t('Innleggsdato'),
    t('NID'),
    t('node/[nid]'),
    t('Lenke'),
    t('Les nyheten'),
    t('Blokk for kunngjøringer'),
    t('Siste kunngjøringer'),
    t('<h2 class="block-title"><a href="/nyheter">Siste kunngjøringer</a></h2>
'),
  );
  $export['news'] = $view;

  $view = new view();
  $view->name = 'news_per_course';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Nyheter - per emne';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Meldinger';
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
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Innhold: Tittel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Felt: Innhold: Innhold */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Felt: Innhold: Rediger lenke */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = '[Rediger meldingen]';
  /* Sorteringskriterium: Innhold: Innleggsdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Innhold: Emne (field_course) */
  $handler->display->display_options['arguments']['field_course_target_id']['id'] = 'field_course_target_id';
  $handler->display->display_options['arguments']['field_course_target_id']['table'] = 'field_data_field_course';
  $handler->display->display_options['arguments']['field_course_target_id']['field'] = 'field_course_target_id';
  $handler->display->display_options['arguments']['field_course_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_course_target_id']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_course_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_course_target_id']['title'] = 'Meldinger for %1';
  $handler->display->display_options['arguments']['field_course_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_course_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_course_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_course_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_course_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_course_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_course_target_id']['validate_options']['types'] = array(
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
    'news' => 'news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Innhold: Emne (field_course) */
  $handler->display->display_options['filters']['field_course_target_id']['id'] = 'field_course_target_id';
  $handler->display->display_options['filters']['field_course_target_id']['table'] = 'field_data_field_course';
  $handler->display->display_options['filters']['field_course_target_id']['field'] = 'field_course_target_id';
  $handler->display->display_options['filters']['field_course_target_id']['relationship'] = 'field_course_target_id';
  $handler->display->display_options['filters']['field_course_target_id']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/meldinger';
  $translatables['news_per_course'] = array(
    t('Master'),
    t('Meldinger'),
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
    t('[Rediger meldingen]'),
    t('Alle'),
    t('Meldinger for %1'),
    t('Page'),
  );
  $export['news_per_course'] = $view;

  return $export;
}
