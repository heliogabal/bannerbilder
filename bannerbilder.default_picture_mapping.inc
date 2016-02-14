<?php
/**
 * @file
 * bannerbilder.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function bannerbilder_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Bannerbilder';
  $picture_mapping->machine_name = 'bannerbilder';
  $picture_mapping->breakpoint_group = 'karus_theme';
  $picture_mapping->mapping = array(
    'breakpoints.theme.karus_theme.wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'bannerbildbreakpoints_theme_enlivenment_wide_1x',
      ),
    ),
    'breakpoints.theme.karus_theme.standard' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'bannerbildbreakpoints_theme_enlivenment_standard_1x',
      ),
    ),
    'breakpoints.theme.karus_theme.narrow' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'bannerbildbreakpoints_theme_enlivenment_narrow_1x',
      ),
    ),
    'breakpoints.theme.karus_theme.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'bannerbildbreakpoints_theme_enlivenment_mobile_1x',
      ),
      '1.5x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'bannerbildbreakpoints_theme_enlivenment_mobile_1_5x',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'bannerbildbreakpoints_theme_enlivenment_mobile_2x',
      ),
    ),
  );
  $export['bannerbilder'] = $picture_mapping;

  return $export;
}
