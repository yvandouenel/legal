<?php
/**
 * @file
 * feature_smartphone_legal.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function feature_smartphone_legal_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'smartphone';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'breakpoint' => array(
      'values' => array(
        0 => 'custom.user.mobile_and_narrow',
      ),
      'options' => array(
        'autoreload' => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'main_menu',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['smartphone'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tablette_et_plus';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'breakpoint' => array(
      'values' => array(
        0 => 'breakpoints.theme.ldlm.wide',
      ),
      'options' => array(
        'autoreload' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => '1',
          'region' => 'main_menu',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['tablette_et_plus'] = $context;

  return $export;
}
