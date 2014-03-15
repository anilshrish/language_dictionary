<?php

/**
 * @file language_dictionary admin forms
 */

function language_dictionary_suggestion_queue() {

  $header = array(

    array('data' => t('Word'), 'field' => 'word', 'sort' => 'asc'),

    array('data' => t('Definition'), 'field' => 'definition'),

    array('data' => t('Synonyms'), 'field' => 'synonyms'),    

    array('data' => t('Usage'), 'field' => 'word_usage'),

   array('data' => t('Operations'), 'colspan' => 2),

  );



  $query = db_select('language_dictionary_suggestion', 'n');

  $query->fields('n', array('word', 'definition', 'synonyms', 'word_usage'));

  

  $table_sort = $query->extend('TableSort') // Add table sort extender.

                      ->orderByHeader($header); // Add order by headers.

  $pager = $table_sort->extend('PagerDefault')

                      ->limit(2);

  $result = $pager->execute();

  $rows = array();

  foreach($result as $res){

    $rows[] = array($res->word, $res->definition, $res->synonyms, $res->word_usage,(l(t('Approve'), 'admin/structure/feeds_admin/manage/' . '' . '/submit')),(l(t('Decline'), 'admin/structure/feeds_admin/manage/' . '' . '/delete')));
}



  // If rows are not empty theme and display the rows.

  $output = '';

  if (!empty($rows)) {

    $output = theme('table', array('header' => $header, 'rows' => $rows, 'attributes' => array('id' => 'sort-table')));

    $output .= theme('pager');

  }

  else {

    $output .= t("No results found.");

  }

  return $output;

}




/**
 * @modify form
 */

function language_dictionary_modify_queue() {
  $header = array(

    array('data' => t('Word'), 'field' => 'word', 'sort' => 'asc'),

    array('data' => t('Definition'), 'field' => 'definition'),

    array('data' => t('Synonyms'), 'field' => 'synonyms'),    

    array('data' => t('Usage'), 'field' => 'word_usage'),

   array('data' => t('Operations'), 'colspan' => 2),

  );



  $query = db_select('language_dictionary_modify', 'm');

  $query->fields('m', array('word', 'definition', 'synonyms', 'word_usage'));

  

  $table_sort = $query->extend('TableSort') // Add table sort extender.

                      ->orderByHeader($header); // Add order by headers.

  $pager = $table_sort->extend('PagerDefault')

                      ->limit(2);

  $result = $pager->execute();

  $rows = array();

  foreach($result as $res){

    $rows[] = array($res->word, $res->definition, $res->synonyms, $res->word_usage,(l(t('Approve'), 'admin/structure/feeds_admin/manage/' . '' . '/submit')),(l(t('Decline'), 'admin/structure/feeds_admin/manage/' . '' . '/delete')));
}



  // If rows are not empty theme and display the rows.

  $output = '';

  if (!empty($rows)) {

    $output = theme('table', array('header' => $header, 'rows' => $rows, 'attributes' => array('id' => 'sort-table')));

    $output .= theme('pager');

  }

  else {

    $output .= t("No results found.");

  }

  return $output;
}
/**
 * @word add form
 */

function language_dictionary_add_queue() {

  $header = array(

    array('data' => t('Word'), 'field' => 'word', 'sort' => 'asc'),

    array('data' => t('Definition'), 'field' => 'definition'),

    array('data' => t('Synonyms'), 'field' => 'synonyms'),    

    array('data' => t('Usage'), 'field' => 'word_usage'),

   array('data' => t('Operations'), 'colspan' => 2),

  );



  $query = db_select('language_dictionary_add', 'a');

  $query->fields('a', array('word', 'definition', 'synonyms', 'word_usage'));

  

  $table_sort = $query->extend('TableSort') // Add table sort extender.

                      ->orderByHeader($header); // Add order by headers.

  $pager = $table_sort->extend('PagerDefault')

                      ->limit(2);

  $result = $pager->execute();

  $rows = array();

  foreach($result as $res){

    $rows[] = array($res->word, $res->definition, $res->synonyms, $res->word_usage,(l(t('Approve'), 'admin/structure/feeds_admin/manage/' . '' . '/submit')),(l(t('Decline'), 'admin/structure/feeds_admin/manage/' . '' . '/delete')));
}



  // If rows are not empty theme and display the rows.

  $output = '';

  if (!empty($rows)) {

    $output = theme('table', array('header' => $header, 'rows' => $rows, 'attributes' => array('id' => 'sort-table')));

    $output .= theme('pager');

  }

  else {

    $output .= t("No results found.");

  }

  return $output;
}
