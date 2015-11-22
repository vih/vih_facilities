<?php
/**
 * @file
 * vih_facilities.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function vih_facilities_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_def79f7d-5749-481a-b585-e89b88f6fffc';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -21;
  $handler->conf = array(
    'title' => 'Facilities',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'vih_facilities' => 'vih_facilities',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Facilities';
  $display->uuid = '45ed476f-e5ba-4631-99fb-d696d18c0080';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-72687955-899d-4626-9e76-c82f9364a955';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_picture';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'panopoly_image_full',
      'image_link' => '',
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '72687955-899d-4626-9e76-c82f9364a955';
  $display->content['new-72687955-899d-4626-9e76-c82f9364a955'] = $pane;
  $display->panels['contentmain'][0] = 'new-72687955-899d-4626-9e76-c82f9364a955';
  $pane = new stdClass();
  $pane->pid = 'new-a188b047-42c4-4675-886b-a744967c56b8';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a188b047-42c4-4675-886b-a744967c56b8';
  $display->content['new-a188b047-42c4-4675-886b-a744967c56b8'] = $pane;
  $display->panels['contentmain'][1] = 'new-a188b047-42c4-4675-886b-a744967c56b8';
  $pane = new stdClass();
  $pane->pid = 'new-ffdb2860-d662-448b-8d92-b4e919a9e763';
  $pane->panel = 'contentmain';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_pictures';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'colorbox',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'colorbox_node_style' => 'vih_quarter_square',
      'colorbox_node_style_first' => '',
      'colorbox_image_style' => 'panopoly_image_featured',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
    'context' => array(),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ffdb2860-d662-448b-8d92-b4e919a9e763';
  $display->content['new-ffdb2860-d662-448b-8d92-b4e919a9e763'] = $pane;
  $display->panels['contentmain'][2] = 'new-ffdb2860-d662-448b-8d92-b4e919a9e763';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-72687955-899d-4626-9e76-c82f9364a955';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_def79f7d-5749-481a-b585-e89b88f6fffc'] = $handler;

  return $export;
}
