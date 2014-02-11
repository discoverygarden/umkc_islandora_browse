<?php
/**
 * @file
 * umkc_content_types.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function umkc_content_types_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_umkc_islandora_object_topic';
  $strongarm->value = 0;
  $export['comment_anonymous_umkc_islandora_object_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_umkc_islandora_object_type';
  $strongarm->value = 0;
  $export['comment_anonymous_umkc_islandora_object_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_umkc_islandora_object_topic';
  $strongarm->value = 1;
  $export['comment_default_mode_umkc_islandora_object_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_umkc_islandora_object_type';
  $strongarm->value = 1;
  $export['comment_default_mode_umkc_islandora_object_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_umkc_islandora_object_topic';
  $strongarm->value = '50';
  $export['comment_default_per_page_umkc_islandora_object_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_umkc_islandora_object_type';
  $strongarm->value = '50';
  $export['comment_default_per_page_umkc_islandora_object_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_umkc_islandora_object_topic';
  $strongarm->value = 1;
  $export['comment_form_location_umkc_islandora_object_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_umkc_islandora_object_type';
  $strongarm->value = 1;
  $export['comment_form_location_umkc_islandora_object_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_umkc_islandora_object_topic';
  $strongarm->value = '0';
  $export['comment_preview_umkc_islandora_object_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_umkc_islandora_object_type';
  $strongarm->value = '0';
  $export['comment_preview_umkc_islandora_object_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_umkc_islandora_object_topic';
  $strongarm->value = 1;
  $export['comment_subject_field_umkc_islandora_object_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_umkc_islandora_object_type';
  $strongarm->value = 1;
  $export['comment_subject_field_umkc_islandora_object_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_umkc_islandora_object_topic';
  $strongarm->value = '1';
  $export['comment_umkc_islandora_object_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_umkc_islandora_object_type';
  $strongarm->value = '1';
  $export['comment_umkc_islandora_object_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__umkc_islandora_object_topic';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__umkc_islandora_object_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__umkc_islandora_object_type';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__umkc_islandora_object_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_umkc_islandora_object_topic';
  $strongarm->value = '0';
  $export['language_content_type_umkc_islandora_object_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_umkc_islandora_object_type';
  $strongarm->value = '0';
  $export['language_content_type_umkc_islandora_object_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_umkc_islandora_object_topic';
  $strongarm->value = array();
  $export['menu_options_umkc_islandora_object_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_umkc_islandora_object_type';
  $strongarm->value = array();
  $export['menu_options_umkc_islandora_object_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_umkc_islandora_object_topic';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_umkc_islandora_object_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_umkc_islandora_object_type';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_umkc_islandora_object_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_umkc_islandora_object_topic';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_umkc_islandora_object_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_umkc_islandora_object_type';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_umkc_islandora_object_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_umkc_islandora_object_topic';
  $strongarm->value = '1';
  $export['node_preview_umkc_islandora_object_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_umkc_islandora_object_type';
  $strongarm->value = '1';
  $export['node_preview_umkc_islandora_object_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_umkc_islandora_object_topic';
  $strongarm->value = 0;
  $export['node_submitted_umkc_islandora_object_topic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_umkc_islandora_object_type';
  $strongarm->value = 0;
  $export['node_submitted_umkc_islandora_object_type'] = $strongarm;

  return $export;
}
