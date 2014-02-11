<?php
/**
 * @file
 * umkc_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function umkc_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function umkc_content_types_node_info() {
  $items = array(
    'umkc_islandora_object_topic' => array(
      'name' => t('umkc_islandora_object_topic'),
      'base' => 'node_content',
      'description' => t('A topic of content in Islandora.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'umkc_islandora_object_type' => array(
      'name' => t('umkc_islandora_object_type'),
      'base' => 'node_content',
      'description' => t('A type of content in Islandora.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
