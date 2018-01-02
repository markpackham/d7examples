<?php
/**
 * @file
 * radiobuttonct_ft.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function radiobuttonct_ft_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-radiobuttonct-field_checkboxbtns'.
  $field_instances['node-radiobuttonct-field_checkboxbtns'] = array(
    'bundle' => 'radiobuttonct',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_checkboxbtns',
    'label' => 'checkboxBtns',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-radiobuttonct-field_radiobuttonbtns'.
  $field_instances['node-radiobuttonct-field_radiobuttonbtns'] = array(
    'bundle' => 'radiobuttonct',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_radiobuttonbtns',
    'label' => 'radiobuttonBtns',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('checkboxBtns');
  t('radiobuttonBtns');

  return $field_instances;
}
