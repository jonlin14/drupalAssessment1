<?php
/**
 * @file
 * book_review.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function book_review_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create book_review content'.
  $permissions['create book_review content'] = array(
    'name' => 'create book_review content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create book_title content'.
  $permissions['create book_title content'] = array(
    'name' => 'create book_title content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any book_review content'.
  $permissions['delete any book_review content'] = array(
    'name' => 'delete any book_review content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any book_title content'.
  $permissions['delete any book_title content'] = array(
    'name' => 'delete any book_title content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own book_review content'.
  $permissions['delete own book_review content'] = array(
    'name' => 'delete own book_review content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own book_title content'.
  $permissions['delete own book_title content'] = array(
    'name' => 'delete own book_title content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any book_review content'.
  $permissions['edit any book_review content'] = array(
    'name' => 'edit any book_review content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any book_title content'.
  $permissions['edit any book_title content'] = array(
    'name' => 'edit any book_title content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own book_review content'.
  $permissions['edit own book_review content'] = array(
    'name' => 'edit own book_review content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own book_title content'.
  $permissions['edit own book_title content'] = array(
    'name' => 'edit own book_title content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
