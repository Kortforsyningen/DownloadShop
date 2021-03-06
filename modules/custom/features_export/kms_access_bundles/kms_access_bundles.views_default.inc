<?php
/**
 * @file
 * kms_access_bundles.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kms_access_bundles_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bundle_legend_header';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bundle legend header';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bundle legend';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_default_image' => 'field_default_image',
    'title' => 'title',
  );
  $handler->display->display_options['row_options']['separator'] = '-';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'bundle_colours' => 'bundle_colours',
    'bundle' => 0,
    'webservices' => 0,
    'aktualitet' => 0,
    'buffer' => 0,
    'dataformat' => 0,
    'data_schema' => 0,
    'datastruktur' => 0,
    'koordinatsystem' => 0,
    'korttype' => 0,
    'user_type' => 0,
    'selection_type' => 0,
  );
  /* Field: Taxonomy term: Default image */
  $handler->display->display_options['fields']['field_default_image']['id'] = 'field_default_image';
  $handler->display->display_options['fields']['field_default_image']['table'] = 'field_data_field_default_image';
  $handler->display->display_options['fields']['field_default_image']['field'] = 'field_default_image';
  $handler->display->display_options['fields']['field_default_image']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['field_default_image']['label'] = '';
  $handler->display->display_options['fields']['field_default_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_default_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_default_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Sort criterion: Content: Default bundle (field_default_bundle) */
  $handler->display->display_options['sorts']['field_default_bundle_value']['id'] = 'field_default_bundle_value';
  $handler->display->display_options['sorts']['field_default_bundle_value']['table'] = 'field_data_field_default_bundle';
  $handler->display->display_options['sorts']['field_default_bundle_value']['field'] = 'field_default_bundle_value';
  $handler->display->display_options['sorts']['field_default_bundle_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'access_bundle' => 'access_bundle',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['bundle_legend_header'] = array(
    t('Master'),
    t('Bundle legend'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term'),
    t('Block'),
  );
  $export['bundle_legend_header'] = $view;

  return $export;
}
