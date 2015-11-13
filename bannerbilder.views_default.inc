<?php
/**
 * @file
 * bannerbilder.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bannerbilder_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'bannerbild';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bannerbilder';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Entity: Rendered entity */
  $handler->display->display_options['empty']['entity']['id'] = 'entity';
  $handler->display->display_options['empty']['entity']['table'] = 'entity__global';
  $handler->display->display_options['empty']['entity']['field'] = 'entity';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_bannerimage_target_id']['id'] = 'field_bannerimage_target_id';
  $handler->display->display_options['relationships']['field_bannerimage_target_id']['table'] = 'field_data_field_bannerimage';
  $handler->display->display_options['relationships']['field_bannerimage_target_id']['field'] = 'field_bannerimage_target_id';
  $handler->display->display_options['relationships']['field_bannerimage_target_id']['label'] = 'Bannerbild';
  $handler->display->display_options['relationships']['field_bannerimage_target_id']['required'] = TRUE;
  /* Field: Content: Bannerbild */
  $handler->display->display_options['fields']['field_banner_1']['id'] = 'field_banner_1';
  $handler->display->display_options['fields']['field_banner_1']['table'] = 'field_data_field_banner';
  $handler->display->display_options['fields']['field_banner_1']['field'] = 'field_banner';
  $handler->display->display_options['fields']['field_banner_1']['relationship'] = 'field_bannerimage_target_id';
  $handler->display->display_options['fields']['field_banner_1']['label'] = '';
  $handler->display->display_options['fields']['field_banner_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_1']['type'] = 'picture';
  $handler->display->display_options['fields']['field_banner_1']['settings'] = array(
    'picture_mapping' => 'bannerbilder',
    'fallback_image_style' => '',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => 'bannerbilder',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'kontaktseite' => 'kontaktseite',
    'page' => 'page',
  );

  /* Display: Bannerbild */
  $handler = $view->new_display('block', 'Bannerbild', 'bannerbild');

  /* Display: Bannerbild Infocenter */
  $handler = $view->new_display('block', 'Bannerbild Infocenter', 'block_1');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Entity: Rendered entity */
  $handler->display->display_options['empty']['entity']['id'] = 'entity';
  $handler->display->display_options['empty']['entity']['table'] = 'entity__global';
  $handler->display->display_options['empty']['entity']['field'] = 'entity';
  $handler->display->display_options['empty']['entity']['empty'] = TRUE;
  $handler->display->display_options['empty']['entity']['entity_id'] = '1488';
  $handler->display->display_options['empty']['entity']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Bannerbild */
  $handler->display->display_options['fields']['field_banner_1']['id'] = 'field_banner_1';
  $handler->display->display_options['fields']['field_banner_1']['table'] = 'field_data_field_banner';
  $handler->display->display_options['fields']['field_banner_1']['field'] = 'field_banner';
  $handler->display->display_options['fields']['field_banner_1']['label'] = '';
  $handler->display->display_options['fields']['field_banner_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_1']['type'] = 'picture';
  $handler->display->display_options['fields']['field_banner_1']['settings'] = array(
    'picture_mapping' => 'bannerbilder',
    'fallback_image_style' => '',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => 'bannerbilder',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['argument'] = '1488';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'bannerbild' => 'bannerbild',
  );
  $translatables['bannerbild'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Bannerbild'),
    t('Alle'),
    t('Bannerbild Infocenter'),
  );
  $export['bannerbild'] = $view;

  return $export;
}
