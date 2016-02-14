<?php
/**
 * @file
 * bannerbilder.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bannerbilder_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "flexslider_picture" && $api == "flexslider_picture_optionset") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_views_api().
 */
function bannerbilder_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function bannerbilder_image_default_styles() {
  $styles = array();

  // Exported image style: banner.
  $styles['banner'] = array(
    'label' => 'Banner',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1000,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => -10,
      ),
    ),
  );

  // Exported image style: bannerbildbreakpoints_theme_enlivenment_mobile_1_5x.
  $styles['bannerbildbreakpoints_theme_enlivenment_mobile_1_5x'] = array(
    'label' => 'bannerbildbreakpoints_theme_enlivenment_mobile_1_5x',
    'effects' => array(
      7 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 840,
          'height' => 198,
          'keepproportions' => 1,
          'style_name' => 'bannerbildbreakpoints_theme_enlivenment_mobile_1_5x',
        ),
        'weight' => -10,
      ),
      23 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 840,
          'height' => 198,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: bannerbildbreakpoints_theme_enlivenment_mobile_1x.
  $styles['bannerbildbreakpoints_theme_enlivenment_mobile_1x'] = array(
    'label' => 'bannerbildbreakpoints_theme_enlivenment_mobile_1x',
    'effects' => array(
      11 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 560,
          'height' => 222,
          'keepproportions' => 1,
          'style_name' => 'bannerbildbreakpoints_theme_enlivenment_mobile_1x',
        ),
        'weight' => -10,
      ),
      21 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 560,
          'height' => 222,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: bannerbildbreakpoints_theme_enlivenment_mobile_2x.
  $styles['bannerbildbreakpoints_theme_enlivenment_mobile_2x'] = array(
    'label' => 'bannerbildbreakpoints_theme_enlivenment_mobile_2x',
    'effects' => array(
      9 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 560,
          'height' => 132,
          'keepproportions' => 1,
          'style_name' => 'bannerbildbreakpoints_theme_enlivenment_mobile_2x',
        ),
        'weight' => -10,
      ),
      22 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1120,
          'height' => 264,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: bannerbildbreakpoints_theme_enlivenment_narrow_1x.
  $styles['bannerbildbreakpoints_theme_enlivenment_narrow_1x'] = array(
    'label' => 'bannerbildbreakpoints_theme_enlivenment_narrow_1x',
    'effects' => array(
      13 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 560,
          'height' => 132,
          'keepproportions' => 1,
          'style_name' => 'bannerbildbreakpoints_theme_enlivenment_narrow_1x',
        ),
        'weight' => -10,
      ),
      20 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 850,
          'height' => 200,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: bannerbildbreakpoints_theme_enlivenment_standard_1x.
  $styles['bannerbildbreakpoints_theme_enlivenment_standard_1x'] = array(
    'label' => 'bannerbildbreakpoints_theme_enlivenment_standard_1x',
    'effects' => array(
      15 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 560,
          'height' => 132,
          'keepproportions' => 1,
          'style_name' => 'bannerbildbreakpoints_theme_enlivenment_standard_1x',
        ),
        'weight' => -10,
      ),
      19 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 226,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: bannerbildbreakpoints_theme_enlivenment_wide_1x.
  $styles['bannerbildbreakpoints_theme_enlivenment_wide_1x'] = array(
    'label' => 'bannerbildbreakpoints_theme_enlivenment_wide_1x',
    'effects' => array(
      7 => array(
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 1000,
          'height' => 242,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function bannerbilder_node_info() {
  $items = array(
    'bannerbild' => array(
      'name' => t('Bannerbild'),
      'base' => 'node_content',
      'description' => t('Die Bannerbilder können einzelnen Seiten zugeordnet werden und werden dann zwischen Header und Inhalt angezeigt. Es ist sinnvoll, die Bannerbilder nach der Seite zu benennen, auf der sie erscheinen sollen, damit die Zuordnung klar ersichtlich wird.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => t('Die Bilder sollten größer als 1000x242 Pixel groß sein, damit sie auf die richtige Größe skaliert werden können. Es werden automatisch mehrere Größen angelegt, die dann je nach Bildschirmgröße angezeigt werden.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
