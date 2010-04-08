<?php

/**
 * Helper to implementation of hook_views_default_views().
 */
function _drh_core_views_default_views() {
  $views = array();

  // Exported view: news
  $view = new view;
  $view->name = 'news';
  $view->description = 'Viser nyheder på forsiden og på nyhedsoversigten.';
  $view->tag = 'drh';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('sorts', array(
    'field_created_value' => array(
      'order' => 'DESC',
      'delta' => -1,
      'id' => 'field_created_value',
      'table' => 'node_data_field_created',
      'field' => 'field_created_value',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'news' => 'news',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('empty', 'Der er i øjeblikket ingen nyheder.');
  $handler->override_option('empty_format', '3');
  $handler->override_option('row_plugin', 'node');
  $handler->override_option('row_options', array(
    'relationship' => 'none',
    'build_mode' => 'teaser',
    'links' => 0,
    'comments' => 0,
  ));
  $handler = $view->new_display('panel_pane', 'Nyhedsblok', 'panel_pane_1');
  $handler->override_option('footer', '<a href="/nyheder">Flere nyheder »</a>');
  $handler->override_option('footer_format', '3');
  $handler->override_option('footer_empty', 0);
  $handler->override_option('row_options', array(
    'relationship' => 'none',
    'build_mode' => 'teaser_front',
    'links' => 0,
    'comments' => 0,
  ));
  $handler->override_option('pane_title', 'Nyhedsblok');
  $handler->override_option('pane_description', '');
  $handler->override_option('pane_category', array(
    'name' => 'DRH',
    'weight' => '0',
  ));
  $handler->override_option('allow', array(
    'use_pager' => 0,
    'items_per_page' => 'items_per_page',
    'offset' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'path_override' => 'path_override',
    'title_override' => 'title_override',
    'exposed_form' => FALSE,
  ));
  $handler->override_option('argument_input', array());
  $handler->override_option('link_to_view', '0');
  $handler->override_option('inherit_panels_path', 0);
  $handler = $view->new_display('panel_pane', 'Nyhedsoversigt', 'panel_pane_2');
  $handler->override_option('use_pager', '1');
  $handler->override_option('pane_title', 'Nyhedsoversigt');
  $handler->override_option('pane_description', '');
  $handler->override_option('pane_category', array(
    'name' => 'DRH',
    'weight' => '0',
  ));
  $handler->override_option('allow', array(
    'use_pager' => 0,
    'items_per_page' => 'items_per_page',
    'offset' => 0,
    'link_to_view' => 0,
    'more_link' => 0,
    'path_override' => 0,
    'title_override' => 'title_override',
    'exposed_form' => FALSE,
  ));
  $handler->override_option('argument_input', array());
  $handler->override_option('link_to_view', 0);
  $handler->override_option('inherit_panels_path', 0);

  $views[$view->name] = $view;

  return $views;
}
