<?php
/**
 * @file
 * vih_facilities.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vih_facilities_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function vih_facilities_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function vih_facilities_node_info() {
  $items = array(
    'vih_facilities' => array(
      'name' => t('Facilities'),
      'base' => 'node_content',
      'description' => t('<em>Facilities</em> is used to describe the different facilities.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
