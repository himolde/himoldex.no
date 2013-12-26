<?php
/**
 * @file
 * himoldex_rules_roles.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function himoldex_rules_roles_default_rules_configuration() {
  $items = array();
  $items['rules_role_lecture'] = entity_import('rules_config', '{ "rules_role_lecture" : {
      "LABEL" : "Tildele foreleserrolle",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "NOT text_matches" : { "text" : [ "account:name" ], "match" : "\\\\d{6}", "operation" : "regex" } }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "4" : "4" } } } }
      ]
    }
  }');
  $items['rules_role_student'] = entity_import('rules_config', '{ "rules_role_student" : {
      "LABEL" : "Tildele studentrolle",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "IF" : [
        { "text_matches" : { "text" : [ "account:name" ], "match" : "\\\\d{6}", "operation" : "regex" } }
      ],
      "DO" : [
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "5" : "5" } } } }
      ]
    }
  }');
  return $items;
}
