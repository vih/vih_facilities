<?php
/**
 * @file
 * vih_facilities.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function vih_facilities_taxonomy_default_vocabularies() {
  return array(
    'facilities_category' => array(
      'name' => 'Facilities Category',
      'machine_name' => 'facilities_category',
      'description' => 'Categories for grouping facilities together.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
