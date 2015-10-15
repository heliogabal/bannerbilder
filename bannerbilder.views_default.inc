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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['relationship'] = 'field_bannerbild_target_id';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* No results behavior: Entity: Rendered entity */
  $handler->display->display_options['empty']['entity']['id'] = 'entity';
  $handler->display->display_options['empty']['entity']['table'] = 'entity__global';
  $handler->display->display_options['empty']['entity']['field'] = 'entity';
  $handler->display->display_options['empty']['entity']['label'] = 'Backupbild';
  $handler->display->display_options['empty']['entity']['empty'] = TRUE;
  $handler->display->display_options['empty']['entity']['entity_id'] = '153';
  $handler->display->display_options['empty']['entity']['bypass_access'] = 0;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_bannerbild_target_id']['id'] = 'field_bannerbild_target_id';
  $handler->display->display_options['relationships']['field_bannerbild_target_id']['table'] = 'field_data_field_bannerbild';
  $handler->display->display_options['relationships']['field_bannerbild_target_id']['field'] = 'field_bannerbild_target_id';
  $handler->display->display_options['relationships']['field_bannerbild_target_id']['label'] = 'Bannerbild';
  $handler->display->display_options['relationships']['field_bannerbild_target_id']['required'] = TRUE;
  /* Field: Content: Bannerbild */
  $handler->display->display_options['fields']['field_banner']['id'] = 'field_banner';
  $handler->display->display_options['fields']['field_banner']['table'] = 'field_data_field_banner';
  $handler->display->display_options['fields']['field_banner']['field'] = 'field_banner';
  $handler->display->display_options['fields']['field_banner']['relationship'] = 'field_bannerbild_target_id';
  $handler->display->display_options['fields']['field_banner']['label'] = '';
  $handler->display->display_options['fields']['field_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_banner']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Contextual filter: Content revision: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node_revision';
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
    'page' => 'page',
  );
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'empty';
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
    'page' => 'page',
  );

  /* Display: Bannerbild */
  $handler = $view->new_display('block', 'Bannerbild', 'block');
  $export['bannerbild'] = $view;

  $view = new view();
  $view->name = 'bannerbilder';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'full';
  /* Field: Content: Bannerbild */
  $handler->display->display_options['fields']['field_bannerbild']['id'] = 'field_bannerbild';
  $handler->display->display_options['fields']['field_bannerbild']['table'] = 'field_data_field_bannerbild';
  $handler->display->display_options['fields']['field_bannerbild']['field'] = 'field_bannerbild';
  $handler->display->display_options['fields']['field_bannerbild']['label'] = '';
  $handler->display->display_options['fields']['field_bannerbild']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bannerbild']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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

  /* Display: Slideshow Block */
  $handler = $view->new_display('block', 'Slideshow Block', 'slideshow_front');
  $handler->display->display_options['display_description'] = 'Slideshow für die Startseite';
  $handler->display->display_options['block_caching'] = '8';
  $export['bannerbilder'] = $view;

  return $export;
}
