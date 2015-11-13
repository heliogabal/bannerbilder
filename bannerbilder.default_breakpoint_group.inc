<?php
/**
 * @file
 * bannerbilder.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function bannerbilder_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'enlivenment';
  $breakpoint_group->name = 'Enlivenment';
  $breakpoint_group->breakpoints = array();
  $breakpoint_group->type = 'theme';
  $breakpoint_group->overridden = 0;
  $export['enlivenment'] = $breakpoint_group;

  return $export;
}
