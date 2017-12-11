<?php
/**
 * @file
 * uit_guide.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function uit_guide_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guide_files|node|guide|form';
  $field_group->group_name = 'group_guide_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'guide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Files',
    'weight' => '4',
    'children' => array(
      0 => 'field_guide_files',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Files',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-guide-files field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_guide_files|node|guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guide_images|node|guide|form';
  $field_group->group_name = 'group_guide_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'guide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '3',
    'children' => array(
      0 => 'field_guide_images',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Images',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-guide-images field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_guide_images|node|guide|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Files');
  t('Images');

  return $field_groups;
}
