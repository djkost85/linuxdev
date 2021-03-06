<?php
// $Id: context.inc,v 1.1.2.1.2.1 2010/09/14 17:41:20 jmiccolis Exp $

$plugin = array(
  'schema' => 'context',
  'menu' => array(
    'menu prefix' => 'admin/structure',
    'menu item' => 'context',
    'menu title' => 'Context',
    'menu description' => 'Associate menus, views, blocks, etc. with different contexts to structure your site.',
  ),
  'title singular' => t('context'),
  'title singular proper' => t('Context'),
  'title plural' => t('contexts'),
  'title plural proper' => t('Contexts'),
  'form' => array(
    'settings' => 'context_ui_form',
    'submit' => 'context_ui_form_submit',
  ),
  'handler' => array(
    'class' => 'context_export_ui',
    'parent' => 'ctools_export_ui',
  ),
);
