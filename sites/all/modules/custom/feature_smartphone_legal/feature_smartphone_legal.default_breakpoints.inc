<?php
/**
 * @file
 * feature_smartphone_legal.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function feature_smartphone_legal_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.ldlm.wide';
  $breakpoint->name = 'wide';
  $breakpoint->breakpoint = '(min-width: 960px)';
  $breakpoint->source = 'ldlm';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 1;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.ldlm.wide'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.mobile_and_narrow';
  $breakpoint->name = 'mobile and narrow';
  $breakpoint->breakpoint = '(max-width:960px)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['custom.user.mobile_and_narrow'] = $breakpoint;

  return $export;
}
