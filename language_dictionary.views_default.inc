<?php
/**
 * Implements hook_views_default_views().
 */
function language_dictionary_views_default_views() {
 
// exported view goes here
$handler = $view->new_display('block', 'Block', 'block');
$view = new view();
$view->name = 'language_dictionary';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'language dictionary';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_type'] = 'em';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
$handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '400';
$handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '400';
$handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = 'gallery';
/* Field: Content: Definition */
$handler->display->display_options['fields']['definition']['id'] = 'definition';
$handler->display->display_options['fields']['definition']['table'] = 'field_data_definition';
$handler->display->display_options['fields']['definition']['field'] = 'definition';
/* Field: Content: Synonyms */
$handler->display->display_options['fields']['synonyms']['id'] = 'synonyms';
$handler->display->display_options['fields']['synonyms']['table'] = 'field_data_synonyms';
$handler->display->display_options['fields']['synonyms']['field'] = 'synonyms';
/* Field: Content: Usage */
$handler->display->display_options['fields']['usage']['id'] = 'usage';
$handler->display->display_options['fields']['usage']['table'] = 'field_data_usage';
$handler->display->display_options['fields']['usage']['field'] = 'usage';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
$handler->display->display_options['fields']['nothing_2']['table'] = 'views';
$handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_2']['label'] = '';
$handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<a class="ctools-use-modal" href="/ld/modify/nojs">Edit word</a>';
$handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
$handler->display->display_options['fields']['nothing_1']['table'] = 'views';
$handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_1']['label'] = '';
$handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a class="ctools-use-modal" href="/ld/addword/nojs">Add word</a>';
$handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'http://heisenberg.com/ld/addword?width=750&amp;height=600';
$handler->display->display_options['fields']['nothing_1']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['nothing_1']['alter']['alt'] = 'Add new word';
$handler->display->display_options['fields']['nothing_1']['alter']['link_class'] = 'colorbox-node';
$handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<a class="ctools-use-modal" href="/ld/suggestion/nojs">Suggest word</a>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Sort criterion: Global: Random */
$handler->display->display_options['sorts']['random']['id'] = 'random';
$handler->display->display_options['sorts']['random']['table'] = 'views';
$handler->display->display_options['sorts']['random']['field'] = 'random';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'language_dictionary' => 'language_dictionary',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');

$views[$view->name] = $view;
 
// return view
  return $views;
}
