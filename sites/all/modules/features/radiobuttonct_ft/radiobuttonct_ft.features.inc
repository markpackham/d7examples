<?php
/**
 * @file
 * radiobuttonct_ft.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function radiobuttonct_ft_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function radiobuttonct_ft_node_info() {
  $items = array(
    'radiobuttonct' => array(
      'name' => t('radiobuttonCT'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
