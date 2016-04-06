<?php
/**
 * @file
 * discimport_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function discimport_roles_user_default_roles() {
  $roles = array();

  // Exported role: store administrator.
  $roles['store administrator'] = array(
    'name' => 'store administrator',
    'weight' => 3,
  );

  return $roles;
}
