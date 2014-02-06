<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */


/**
 * Implements hook_form_alter(). Currently DISABLED.
 */
function himoldex_form_alter_DISABLED(&$form, &$form_state, $form_id) {
  if ($form_id == 'search_block_form') {
    $form['search_block_form']['#title'] = t('Search'); // Change the text on the label element
    $form['search_block_form']['#title_display'] = 'invisible'; // Toggle label visibilty
    $form['search_block_form']['#size'] = 25;  // define size of the textfield
    $form['search_block_form']['#value'] = t('Search'); // Set a default value for the textfield
    $form['actions']['submit']['#value'] = t('GO!'); // Change the text on the submit button
 
    // Add extra attributes to the text box
    $form['search_block_form']['#attributes']['onblur'] = ''; //"if (this.value == '') {this.value = 'Search';}";
    $form['search_block_form']['#attributes']['onfocus'] = ''; //"if (this.value == 'Search') {this.value = '';}";
  }
}

/**
 * Process variables for search-result.tpl.php.
 * @see search-result.tpl.php
 *
 * Not used/needed when the custom search module is enabled.
 */
function himoldex_preprocess_search_result(&$variables) {
  // Remove user name and modification date from search results
  $variables['info'] = '';
}


function himoldex_field__field_study_handbook__studyplan($variables){
    $prefix = '<p>Les i ';
    $suffix = ' for formell beskrivelse av studiet';
    list($month, $day) = explode(':', date("n:j", time()));
    if (($month == '2') || ($month == '3') || (($month == '4') && ($day < 16))) {
         $suffix .= ' og gå til <a href="http://www.samordnaopptak.no/">Samordna opptak</a> for å søke. Søknadsfrist 15. april';
    }
    $suffix .= '.</p>';
    $variables['items'][0]['#prefix'] = $prefix;
    $variables['items'][0]['#suffix'] = $suffix;
    return theme_field($variables);
}

/**
 * Minor rewrite of theme_username so names aren't truncated.
 */
function himoldex_username($variables) {
  if (!empty($variables['name_raw'])) {
    $name = check_plain($variables['name_raw']);
  } else {
    $name = $variables['name'];
  }
  if (isset($variables['link_path'])) {
    // We have a link path, so we should generate a link using l().
    // Additional classes may be added as array elements like
    // $variables['link_options']['attributes']['class'][] = 'myclass';
    $output = l($name . $variables['extra'], $variables['link_path'], $variables['link_options']);
  }
  else {
    // Modules may have added important attributes so they must be included
    // in the output. Additional classes may be added as array elements like
    // $variables['attributes_array']['class'][] = 'myclass';
    $output = '<span' . drupal_attributes($variables['attributes_array']) . '>' . $name . $variables['extra'] . '</span>';
  }
  return $output;
}

/**
 * Adding h3 to the menu. Will probably be removed later ...
 */
function himoldex_menu_link($variables) {
    if ($variables['element']['#original_link']['menu_name'] == 'menu-all') {
        $variables['element']['#localized_options']['html'] = TRUE;
        $variables['element']['#title'] = '<h3>' . $variables['element']['#title'] . '</h3>';
    }
    return theme_menu_link($variables);
}

/**
 * Removing the more link in the aggregator blocks.
 */
function himoldex_more_link ($array) {
  if (stristr($array['url'], 'aggregator')) {
    return "";
  }
}
