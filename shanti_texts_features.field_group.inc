<?php
/**
 * @file
 * shanti_texts_features.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function shanti_texts_features_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_book_admin|node|book|form';
  $field_group->group_name = 'group_book_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Admin',
    'weight' => '4',
    'children' => array(
      0 => 'field_admin_status',
      1 => 'group_content_access',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-book-admin field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_book_admin|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_book_content|node|book|form';
  $field_group->group_name = 'group_book_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_book_content',
      1 => 'field_general_featured_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-book-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_book_content|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_book_metadata|node|book|form';
  $field_group->group_name = 'group_book_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '2',
    'children' => array(
      0 => 'field_book_author',
      1 => 'field_book_date',
      2 => 'field_dc_creator_author',
      3 => 'field_dc_creator_editor',
      4 => 'field_dc_creator_translator',
      5 => 'field_dc_date_orginial_year',
      6 => 'field_dc_date_publication_year',
      7 => 'field_dc_description',
      8 => 'field_dc_language_original',
      9 => 'field_dc_rights_creativecommons',
      10 => 'field_dc_rights_general',
      11 => 'field_kmap_places',
      12 => 'field_kmap_term',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Typically these fields are used only for the root node of the book.',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_book_metadata|node|book|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_test|node|book|form';
  $field_group->group_name = 'group_test';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'book';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Test',
    'weight' => '3',
    'children' => array(
      0 => 'field_kmaps_subjects',
      1 => 'field_kmaps_places',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_test|node|book|form'] = $field_group;

  return $export;
}