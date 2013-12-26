<?php
/**
 * @file
 * himoldex_rules_notify.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function himoldex_rules_notify_default_rules_configuration() {
  $items = array();
  $items['rules_when_content_updated'] = entity_import('rules_config', '{ "rules_when_content_updated" : {
      "LABEL" : "N\\u00e5r innhold oppdateres",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update" : [] },
      "DO" : [
        { "mail" : {
            "to" : "nordhaug+himoldex@himolde.no",
            "subject" : "[himoldex] Innhold \\u0022[node:title]\\u0022 oppdatert",
            "message" : "G\\u00e5 til [node:url] for \\u00e5 se innholdet. G\\u00e5 til [node:edit-url] for \\u00e5 redigere innholdet.\\r\\n\\r\\nEndringer:\\r\\n\\r\\n[node:diff]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_when_new_content_created'] = entity_import('rules_config', '{ "rules_when_new_content_created" : {
      "LABEL" : "N\\u00e5r nytt innhold opprettes",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
      "DO" : [
        { "mail" : {
            "to" : "nordhaug+himoldex@himolde.no",
            "subject" : "[himoldex] Nytt innhold \\u0022[node:title]\\u0022 opprettet",
            "message" : "G\\u00e5 til [node:url] for \\u00e5 se innholdet - skrevet av [node:author].\\r\\n\\r\\nG\\u00e5 til [node:edit-url] for \\u00e5 redigere innholdet.",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_when_new_user_created'] = entity_import('rules_config', '{ "rules_when_new_user_created" : {
      "LABEL" : "N\\u00e5r ny bruker opprettes",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "mail" : {
            "to" : "nordhaug+himoldex@himolde.no",
            "subject" : "[himoldex] Bruker \\u0022[account:name]\\u0022 opprettet",
            "message" : "Brukeren er tildelt rolle [account:roles].\\r\\n\\r\\nBes\\u00f8k [account:edit-url] for \\u00e5 redigere brukeren.",
            "language" : [ "account:language" ]
          }
        }
      ]
    }
  }');
  return $items;
}
