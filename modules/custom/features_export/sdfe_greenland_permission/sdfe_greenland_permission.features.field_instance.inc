<?php
/**
 * @file
 * sdfe_greenland_permission.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function sdfe_greenland_permission_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'config_pages-greenland_permissions-field_modal_checkbox_text'.
  $field_instances['config_pages-greenland_permissions-field_modal_checkbox_text'] = array(
    'bundle' => 'greenland_permissions',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'config_pages',
    'field_name' => 'field_modal_checkbox_text',
    'label' => 'Checkbox text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 43,
    ),
  );

  // Exported field_instance:
  // 'config_pages-greenland_permissions-field_modal_text'.
  $field_instances['config_pages-greenland_permissions-field_modal_text'] = array(
    'bundle' => 'greenland_permissions',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'config_pages',
    'field_name' => 'field_modal_text',
    'label' => 'Text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 42,
    ),
  );

  // Exported field_instance:
  // 'config_pages-greenland_permissions-field_modal_title'.
  $field_instances['config_pages-greenland_permissions-field_modal_title'] = array(
    'bundle' => 'greenland_permissions',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'config_pages',
    'field_name' => 'field_modal_title',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Checkbox text');
  t('Text');
  t('Title');

  return $field_instances;
}
