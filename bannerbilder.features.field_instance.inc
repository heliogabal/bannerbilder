<?php
/**
 * @file
 * bannerbilder.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bannerbilder_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-bannerbild-field_banner'.
  $field_instances['node-bannerbild-field_banner'] = array(
    'bundle' => 'bannerbild',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => 'bannerbilder',
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => '',
          'lazyload_aspect_ratio' => '',
          'picture_mapping' => 'bannerbilder',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => 'bannerbilder',
          ),
          'fallback_image_style' => '',
          'image_link' => '',
          'lazyload' => 1,
          'lazyload_aspect_ratio' => 1,
          'picture_mapping' => 'bannerbilder',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_banner',
    'label' => 'Bannerbild',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 1,
            'transliterate' => 1,
          ),
          'value' => 'bannerbilder',
        ),
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 1,
      'image_field_caption' => 0,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '1400x330',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
          'vimeo' => 0,
          'youtube' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 0,
          'media_internet' => 'media_internet',
          'upload' => 'upload',
          'youtube' => 0,
        ),
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => FALSE,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => TRUE,
        'manualcrop_maximize_default_crop_area' => FALSE,
        'manualcrop_require_cropping' => array(
          'bannerbildbreakpoints_theme_enlivenment_mobile_1_5x' => 'bannerbildbreakpoints_theme_enlivenment_mobile_1_5x',
          'bannerbildbreakpoints_theme_enlivenment_mobile_1x' => 'bannerbildbreakpoints_theme_enlivenment_mobile_1x',
          'bannerbildbreakpoints_theme_enlivenment_mobile_2x' => 'bannerbildbreakpoints_theme_enlivenment_mobile_2x',
          'bannerbildbreakpoints_theme_enlivenment_narrow_1x' => 'bannerbildbreakpoints_theme_enlivenment_narrow_1x',
          'bannerbildbreakpoints_theme_enlivenment_standard_1x' => 'bannerbildbreakpoints_theme_enlivenment_standard_1x',
          'bannerbildbreakpoints_theme_enlivenment_wide_1x' => 'bannerbildbreakpoints_theme_enlivenment_wide_1x',
        ),
        'manualcrop_styles_list' => array(
          'bannerbildbreakpoints_theme_enlivenment_mobile_1_5x' => 'bannerbildbreakpoints_theme_enlivenment_mobile_1_5x',
          'bannerbildbreakpoints_theme_enlivenment_mobile_1x' => 'bannerbildbreakpoints_theme_enlivenment_mobile_1x',
          'bannerbildbreakpoints_theme_enlivenment_mobile_2x' => 'bannerbildbreakpoints_theme_enlivenment_mobile_2x',
          'bannerbildbreakpoints_theme_enlivenment_narrow_1x' => 'bannerbildbreakpoints_theme_enlivenment_narrow_1x',
          'bannerbildbreakpoints_theme_enlivenment_standard_1x' => 'bannerbildbreakpoints_theme_enlivenment_standard_1x',
          'bannerbildbreakpoints_theme_enlivenment_wide_1x' => 'bannerbildbreakpoints_theme_enlivenment_wide_1x',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 1,
      ),
      'type' => 'media_generic',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Bannerbild');

  return $field_instances;
}
