<?php
/**
 * @file
 * webformtest_ft.features.webform.inc
 */

/**
 * Implements hook_webform_defaults().
 */
function webformtest_ft_webform_defaults() {
$webforms = array();
  $webforms['webformtest'] = array(
  'title' => 'webformTest',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'type' => 'webform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'next_serial' => 4,
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'confidential' => 0,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 1,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 1,
    'progressbar_include_confirmation' => 1,
    'progressbar_label_first' => 'Start',
    'progressbar_label_confirmation' => 'Complete',
    'preview' => 0,
    'preview_next_button_label' => '',
    'preview_prev_button_label' => '',
    'preview_title' => '',
    'preview_message' => '',
    'preview_message_format' => NULL,
    'preview_excluded_components' => array(),
    'machine_name' => 'webformtest',
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(
      0 => array(
        'email' => 'markpackham1@gmail.com',
        'subject' => 'default',
        'from_name' => 'default',
        'from_address' => 'Notmarkpackham1@gmail.com',
        'template' => 'default',
        'excluded_components' => array(),
        'html' => 0,
        'attachments' => 0,
        'exclude_empty' => 0,
        'extra' => FALSE,
        'status' => 1,
        'components_machine_names' => array(
          'email' => FALSE,
          'subject' => FALSE,
          'from_name' => FALSE,
          'from_address' => FALSE,
        ),
      ),
    ),
    'components' => array(
      'webformtest__radiotest' => array(
        'form_key' => 'radiotest',
        'name' => 'radioTest',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => '1|A
2|B',
          'multiple' => 0,
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 0,
          'empty_option' => '',
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 0,
        'machine_name' => 'webformtest__radiotest',
        'page_num' => 1,
      ),
      'webformtest__checkboxtest' => array(
        'form_key' => 'checkboxtest',
        'name' => 'checkboxTest',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'check1|check1
check2|check2',
          'multiple' => 1,
          'title_display' => 'before',
          'description_above' => 0,
          'private' => 0,
          'wrapper_classes' => '',
          'css_classes' => '',
          'aslist' => 0,
          'empty_option' => '',
          'optrand' => 0,
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'analysis' => TRUE,
        ),
        'required' => 0,
        'weight' => 1,
        'machine_name' => 'webformtest__checkboxtest',
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'webform_features_author' => 'admin',
  'webform_features_revision_author' => '',
);
return $webforms;
}
