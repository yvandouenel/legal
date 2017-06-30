<?php
/**
 * @file
 * news.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function news_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'link';
  $ds_field->label = 'event_link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
  $url_dest = drupal_get_path_alias(\'node/\'.$entity->vid);
  if (isset($entity->field_news_url_target[\'und\'][0][\'value\'])) $url_dest =  $entity->field_news_url_target[\'und\'][0][\'value\'];
  $title = \'<h3 class="h3-event"><a href="\'.$url_dest.\'">\'.$entity->title.\'</a></h3>\';
  print $title;
  
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'zoom_sur';
  $ds_field->label = 'Zoom sur';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<h2 class="title2_zoom_home">Zoom sur ...</h2>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['zoom_sur'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function news_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_date',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_date' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|news|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_date',
        2 => 'field_scald_image',
        3 => 'field_scald_video',
        4 => 'field_scald_gallery',
        5 => 'field_scald_sound',
        6 => 'field_news_only_video',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_date' => 'ds_content',
      'field_scald_image' => 'ds_content',
      'field_scald_video' => 'ds_content',
      'field_scald_gallery' => 'ds_content',
      'field_scald_sound' => 'ds_content',
      'field_news_only_video' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|news|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_title_img',
        1 => 'body',
        2 => 'link',
        3 => 'field_scald_image',
      ),
    ),
    'fields' => array(
      'group_title_img' => 'ds_content',
      'body' => 'ds_content',
      'link' => 'ds_content',
      'field_scald_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|news|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|zoom';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'zoom';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_all_home_zoom',
        1 => 'link',
        2 => 'field_images',
        3 => 'group_title_text',
        4 => 'body',
        5 => 'zoom_sur',
        6 => 'field_scald_image',
      ),
    ),
    'fields' => array(
      'group_all_home_zoom' => 'ds_content',
      'link' => 'ds_content',
      'field_images' => 'ds_content',
      'group_title_text' => 'ds_content',
      'body' => 'ds_content',
      'zoom_sur' => 'ds_content',
      'field_scald_image' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|news|zoom'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|projet|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'projet';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_sous_titre',
        1 => 'field_galerie_photo',
        2 => 'body',
        3 => 'sharethis',
      ),
    ),
    'fields' => array(
      'field_sous_titre' => 'ds_content',
      'field_galerie_photo' => 'ds_content',
      'body' => 'ds_content',
      'sharethis' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|projet|default'] = $ds_layout;

  return $export;
}
