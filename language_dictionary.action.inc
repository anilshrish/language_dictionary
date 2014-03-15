<?php

/**
 * @file language_dictionary admin forms
 */

function language_dictionary_suggestion_form($form,&$form_state) {
$form['word']    = array(
      '#title' => 'Word',
      '#type' => 'textfield',
      '#required' => TRUE,
      '#size' => 35,
      '#maxlength' => 45,
      );

$form['definition']    = array(
        '#title' => 'Definition',
        '#type' => 'textarea',
        '#required' => TRUE,
        '#size' => 35,
        '#maxlength' => 255,
        '#description' => t('Enter the suggested definition for the word.'),
        );

$form['synonyms'] = array(
        '#title' => 'Synonym',
        '#type' => 'textfield',
        '#required' => TRUE,
        '#size' => 35,
        '#maxlength' => 255,
        '#description' => t('Enter the suggested synonym for the word.'),
);

$form['usage'] = array(
        '#title' => 'usage',
        '#type' => 'textarea',
        '#required' => TRUE,
        '#size' => 35,
        '#maxlength' => 255,
        '#description' => t('Enter the suggested usage for the word.'),
);
$form['submit'] = array(
        '#type' => 'submit',
        '#value' => 'Submit'
    );



return $form;
}

/*
 * implements hook_form_validation
 * validation
 */
function language_dictionary_suggestion_form_validate($form, &$form_state) {
}

/*
 * implements hook_form_submit
 * below is the form submission function
 */
function language_dictionary_suggestion_form_submit($form, $form_state) {

$values = array(
        'word' => $form_state['values']['word'],
        'definition' => $form_state['values']['definition'],
        'synonyms' => $form_state['values']['synonyms'],
        'usage' => $form_state['values']['usage'],
    );
    //insert the variables into the table
    $insert = db_insert('language_dictionary_suggestion')->fields(array(
        'word' => $values['word'],
        'definition' => $values['definition'],
        'synonyms' => $values['synonyms'],
        'word_usage' => $values['usage'],
    ))->execute();

#  modalframe_close_dialog();
   drupal_set_message(t('Thank you for your valuable suggestions. Your form has been submitted.')); //custom message

ctools_modal_command_dismiss();
}

/**
 * @modify form
 */

function language_dictionary_modify_form($form,&$form_state) {

$form['word']  = array(
      '#title' => 'Word',
      '#type' => 'textfield',
      '#required' => TRUE,
      '#size' => 35,
      '#maxlength' => 45,
      );
$form['definition']    = array(
        '#title' => 'Definition',
        '#type' => 'textarea',
        '#required' => TRUE,
        '#size' => 35,
        '#maxlength' => 255,
        '#description' => t('Enter the suggested meaning for the word.'),
        );
$form['synonyms'] = array(
        '#title' => 'Synonym',
        '#type' => 'textfield',
        '#required' => TRUE,
        '#size' => 35,
        '#maxlength' => 255,
        '#description' => t('Enter the suggested synonym for the word.'),
);

$form['usage'] = array(
        '#title' => 'usage',
        '#type' => 'textarea',
        '#required' => TRUE,
        '#size' => 35,
        '#maxlength' => 255,
        '#description' => t('Enter the suggested usage for the word.'),
);

$form['submit'] = array(
        '#type' => 'submit',
        '#value' => 'Submit'
    );

return $form;
}

/*
 * implements hook_form_validation
 * validation
 */
function language_dictionary_modify_form_validate($form, &$form_state) {
}

/*
 * implements hook_form_submit
 * below is the form submission function
 */
function language_dictionary_modify_form_submit($form, $form_state) {

$values = array(
        'word' => $form_state['values']['word'],
        'definition' => $form_state['values']['definition'],
        'synonyms' => $form_state['values']['synonyms'],
        'usage' => $form_state['values']['usage'],
    );
    //insert the variables into the table
    $insert = db_insert('language_dictionary_modify')->fields(array(
        'word' => $values['word'],
        'definition' => $values['definition'],
        'synonyms' => $values['synonyms'],
        'word_usage' => $values['usage'],
    ))->execute();

   drupal_set_message(t('Thank you for your valuable suggestion. Your form has been submitted.')); //custom message

ctools_modal_command_dismiss();
}

/**
 * @word add form
 */

function language_dictionary_add_form($form,&$form_state) {

$form['word']    = array(
      '#title' => 'Word',
      '#type' => 'textfield',
      '#required' => TRUE,
      '#size' => 35,
      '#maxlength' => 45,
      '#description' => t('Enter the word you want to add.'),
      );
$form['definition']    = array(
        '#title' => 'Definition',
        '#type' => 'textarea',
        '#required' => TRUE,
        '#size' => 35,
        '#maxlength' => 255,
        '#description' => t('Enter the definition for the word.'),
        );
$form['synonyms'] = array(
        '#title' => 'Synonym',
        '#type' => 'textfield',
        '#required' => TRUE,
        '#size' => 35,
        '#maxlength' => 255,
        '#description' => t('Enter the synonym for the word.'),
);

$form['usage'] = array(
        '#title' => 'usage',
        '#type' => 'textarea',
        '#required' => TRUE,
        '#size' => 35,
        '#maxlength' => 255,
        '#description' => t('Enter the usage for the word.'),
);

$form['submit'] = array(
        '#type' => 'submit',
        '#value' => 'Submit'
    );

return $form;
}


/*
 * implements hook_form_validation
 * validation
 */
function language_dictionary_add_form_validate($form, &$form_state) {
}

/*
 * implements hook_form_submit
 * below is the form submission function
 */
function language_dictionary_add_form_submit($form, $form_state) {
//insert db

$values = array(
        'word' => $form_state['values']['word'],
        'definition' => $form_state['values']['definition'],
        'synonyms' => $form_state['values']['synonyms'],
        'usage' => $form_state['values']['usage'],
    );
    //insert the variables into the table
    $insert = db_insert('language_dictionary_add')->fields(array(
        'word' => $values['word'],
        'definition' => $values['definition'],
        'synonyms' => $values['synonyms'],
        'word_usage' => $values['usage'],
    ))->execute();

#  modalframe_close_dialog();
   drupal_set_message(t('Thank you. Your form has been submitted.')); //custom message

ctools_modal_command_dismiss();
}

function language_dictionary_automodal_alter(&$settings, &$selector) {
    $settings['automodalReload'] = TRUE;
}
