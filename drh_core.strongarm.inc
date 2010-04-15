<?php
// $Id$

/**
 * @file
 * Strongarmed variables for drh.dk.
 */

/**
 * Implementation of hook_strongarm().
 */
function drh_core_strongarm() {
  // core
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'drh.dk';
  $strongarms['site_name'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_footer';
  $strongarm->value = 'Den Rytmiske Højskole · Jyderupvej 18 · 4560 Vig · 5936 0600 · <a href="/kontakt">den@rytmiske.dk</a>';
  $strongarms['site_footer'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'drh_jensen';
  $strongarms['theme_default'] = $strongarm;

  // admin menu
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_modules';
  $strongarm->value = TRUE;
  $strongarms['admin_menu_tweak_modules'] = $strongarm;

  return $strongarms;
}
