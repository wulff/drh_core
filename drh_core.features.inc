<?php

/**
 * Implementation of hook_content_default_fields().
 */
function drh_core_content_default_fields() {
  module_load_include('inc', 'drh_core', 'drh_core.defaults');
  $args = func_get_args();
  return call_user_func_array('_drh_core_content_default_fields', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function drh_core_ctools_plugin_api() {
  module_load_include('inc', 'drh_core', 'drh_core.defaults');
  $args = func_get_args();
  return call_user_func_array('_drh_core_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function drh_core_fieldgroup_default_groups() {
  module_load_include('inc', 'drh_core', 'drh_core.defaults');
  $args = func_get_args();
  return call_user_func_array('_drh_core_fieldgroup_default_groups', $args);
}

/**
 * Implementation of hook_node_info().
 */
function drh_core_node_info() {
  module_load_include('inc', 'drh_core', 'drh_core.features.node');
  $args = func_get_args();
  return call_user_func_array('_drh_core_node_info', $args);
}

/**
 * Implementation of hook_default_page_manager_handlers().
 */
function drh_core_default_page_manager_handlers() {
  module_load_include('inc', 'drh_core', 'drh_core.defaults');
  $args = func_get_args();
  return call_user_func_array('_drh_core_default_page_manager_handlers', $args);
}

/**
 * Implementation of hook_default_page_manager_pages().
 */
function drh_core_default_page_manager_pages() {
  module_load_include('inc', 'drh_core', 'drh_core.defaults');
  $args = func_get_args();
  return call_user_func_array('_drh_core_default_page_manager_pages', $args);
}

/**
 * Implementation of hook_default_panels_mini().
 */
function drh_core_default_panels_mini() {
  module_load_include('inc', 'drh_core', 'drh_core.defaults');
  $args = func_get_args();
  return call_user_func_array('_drh_core_default_panels_mini', $args);
}

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function drh_core_taxonomy_default_vocabularies() {
  module_load_include('inc', 'drh_core', 'drh_core.features.taxonomy_vocabulary');
  $args = func_get_args();
  return call_user_func_array('_drh_core_taxonomy_default_vocabularies', $args);
}

/**
 * Implementation of hook_enable().
 */
function drh_core_enable() {
  module_load_include('inc', 'drh_core', 'drh_core.features.taxonomy_vocabulary');
  $args = func_get_args();
  return call_user_func_array('_drh_core_enable', $args);
}

/**
 * Implementation of hook_disable().
 */
function drh_core_disable() {
  module_load_include('inc', 'drh_core', 'drh_core.features.taxonomy_vocabulary');
  $args = func_get_args();
  return call_user_func_array('_drh_core_disable', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function drh_core_user_default_permissions() {
  module_load_include('inc', 'drh_core', 'drh_core.defaults');
  $args = func_get_args();
  return call_user_func_array('_drh_core_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function drh_core_strongarm() {
  module_load_include('inc', 'drh_core', 'drh_core.defaults');
  $args = func_get_args();
  return call_user_func_array('_drh_core_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function drh_core_views_default_views() {
  module_load_include('inc', 'drh_core', 'drh_core.features.views');
  $args = func_get_args();
  return call_user_func_array('_drh_core_views_default_views', $args);
}
