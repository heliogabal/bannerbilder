<?php
/**
 * @file
 * bannerbilder.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function bannerbilder_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.enlivenment.mobile';
  $breakpoint->name = 'mobile';
  $breakpoint->breakpoint = '(min-width: 0px)';
  $breakpoint->source = 'enlivenment';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 3;
  $breakpoint->multipliers = array(
    '1.5x' => '1.5x',
    '2x' => '2x',
    '1x' => '1x',
  );
  $export['breakpoints.theme.enlivenment.mobile'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.enlivenment.narrow';
  $breakpoint->name = 'narrow';
  $breakpoint->breakpoint = '(min-width: 560px)';
  $breakpoint->source = 'enlivenment';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 2;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.enlivenment.narrow'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.enlivenment.standard';
  $breakpoint->name = 'standard';
  $breakpoint->breakpoint = '(min-width: 851px)';
  $breakpoint->source = 'enlivenment';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 1;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.enlivenment.standard'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.enlivenment.wide';
  $breakpoint->name = 'wide';
  $breakpoint->breakpoint = '(min-width: 1025px)';
  $breakpoint->source = 'enlivenment';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.enlivenment.wide'] = $breakpoint;

  return $export;
}
