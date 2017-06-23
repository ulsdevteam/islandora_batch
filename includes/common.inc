<?php

/* 
 * This unit could be used for any shared functions that "islandora_batch"-related
 * modules could employ.
 *
 */


/**
 * Loads the common base drush parameters.
 *
 * @return array - base parameters that can be overridden by another
 * "islandora_batch" module
 */
function islandora_batch_get_base_drush_parameters() {
  return array(
    'type' => drush_get_option('type'),
    'namespace' => drush_get_option('namespace'),
    'target' => drush_get_option('target'),
    'assign_pid' => drush_get_option('assign_pid', ''),
    'overwrite_existing' => drush_get_option('overwrite_existing', NULL),
    'parent' => drush_get_option('parent', variable_get('islandora_repository_pid', 'islandora:root')),
    'parent_relationship_uri' => drush_get_option('parent_relationship_uri', 'info:fedora/fedora-system:def/relations-external#'),
    'parent_relationship_pred' => drush_get_option('parent_relationship_pred', 'isMemberOfCollection'),
    'relationship' => drush_get_option('relationship', ''),
    'relationship_pred' => drush_get_option('relationship_pred', ''),
    'relationship_namespace' => drush_get_option('relationship_namespace', ''),
  );
}
