<?php

/**
 * Helper to implementation of hook_taxonomy_default_vocabularies().
 */
function _drh_core_taxonomy_default_vocabularies() {
  $items = array(
  array(
      'name' => 'Facilitet',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '1',
      'required' => '1',
      'tags' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'nodes' => array(
        'facility' => 'facility',
      ),
      'machine' => 'facilitet',
    ),
  array(
      'name' => 'Fag',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '1',
      'tags' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'nodes' => array(
        'course' => 'course',
      ),
      'machine' => 'fag',
    ),
  array(
      'name' => 'Kalender',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '1',
      'required' => '1',
      'tags' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'nodes' => array(
        'event' => 'event',
      ),
      'machine' => 'kalender',
    ),
  array(
      'name' => 'Linie',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'nodes' => array(
        'page' => 'page',
        'news' => 'news',
        'topic' => 'topic',
        'course' => 'course',
        'facility' => 'facility',
        'event' => 'event',
        'profile' => 'profile',
      ),
      'machine' => 'linie',
    ),
  array(
      'name' => 'Personale',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '1',
      'tags' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'nodes' => array(
        'profile' => 'profile',
      ),
      'machine' => 'personale',
    ),
  array(
      'name' => 'Tags',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
      'nodes' => array(
        'page' => 'page',
        'news' => 'news',
        'topic' => 'topic',
        'course' => 'course',
        'facility' => 'facility',
        'event' => 'event',
        'profile' => 'profile',
      ),
      'machine' => 'tags',
    ),
  );
  return $items;
}

/**
 * Helper to implementation of hook_enable().
 */
function _drh_core_enable() {
  exportables_sync('taxonomy_vocabulary', 'drh_core');
}

/**
 * Helper to implementation of hook_disable().
 */
function _drh_core_disable() {
  exportables_unsync('taxonomy_vocabulary', 'drh_core');
}
