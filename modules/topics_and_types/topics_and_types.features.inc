<?php
/**
 * @file
 * topics_and_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function topics_and_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
