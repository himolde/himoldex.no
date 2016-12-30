; This file was generated by drush make and the manually edited.
core = 7.x

api = 2
projects[drupal][version] = "7.53"
projects[drupal][patch][] = "http://himoldex.no/patches/1969208-2.patch"

defaults[projects][subdir] = "contrib"

; Modules
projects[admin_menu][version] = "3.0-rc5"

projects[auto_entitylabel][version] = "1.3"

projects[ctools][version] = "1.12"

projects[coffee][version] = "2.3"

projects[colorbox][version] = "2.12"

projects[colorbox_node][version] = "3.5"

projects[custom_search][version] = "1.20"

projects[date][version] = "2.9"

projects[diff][version] = "3.3"

projects[entity][version] = "1.8"

projects[entityreference][version] = "1.2"

projects[features_extra][version] = "1.0"

projects[features][version] = "2.10"

projects[field_group][version] = "1.5"

projects[file_entity][version] = "2.0-beta3"

projects[flexslider][version] = "2.0-rc1"

projects[google_analytics][version] = "2.3"

projects[imce][version] = "1.10"

projects[imce_wysiwyg][version] = "1.0"

projects[l10n_update][version] = "1.1"

projects[ldap][version] = "2.0-beta11"

projects[libraries][version] = "2.3"

projects[link][version] = "1.4"

projects[linkit][version] = "2.7"

projects[media][version] = "2.0-rc1"

projects[module_filter][version] = "2.0"

projects[omega_tools][version] = "3.0-rc4"

projects[panels][version] = "3.8"

projects[pathauto][version] = "1.3"

projects[pathologic][version] = "2.12"

projects[publishcontent][version] = "1.4"

projects[readmorecontrol][version] = "1.2"

projects[realname][version] = "1.3"

projects[redirect][version] = "1.0-rc3"

projects[references_dialog][version] = "1.0-beta1"

projects[revision_deletion][version] = "1.x-dev"

projects[rules][version] = "2.9"

projects[securelogin][version] = "1.6"

projects[subpathauto][version] = "1.3"

projects[token][version] = "1.6"

projects[transliteration][version] = "3.2"

projects[views][version] = "3.14"

projects[views_conditional][version] = "1.3"

projects[view_unpublished][version] = "1.2"

projects[wysiwyg][version] = "2.2"

projects[youtube][version] = "1.7"

; Themes
projects[omega][version] = "3.1"

; Modules
projects[nodequeue][type] = "module"
projects[nodequeue][download][type] = "git"
projects[nodequeue][download][url] = "http://git.drupal.org/project/nodequeue.git"
projects[nodequeue][download][branch] = "7.x-3.x"
projects[nodequeue][download][revision] = "9a4384a3fc4b969fb68d5198d3e1ee92717422d8"

; Libraries
libraries[tinymce][download][type] = "get"
libraries[tinymce][download][url] = "http://download.moxiecode.com/tinymce/tinymce_3.5.8.zip"
libraries[tinymce][directory_name] = "tinymce"
libraries[tinymce][type] = "library"

libraries[colorbox][download][type] = "get"
libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox/archive/1.6.4.zip"
libraries[colorbox][directory_name] = "colorbox"
libraries[colorbox][type] = "library"

libraries[flexslider][download][type] = "get"
libraries[flexslider][download][url] = "https://github.com/woothemes/FlexSlider/archive/version/2.2.zip"
libraries[flexslider][directory_name] = "flexslider"
libraries[flexslider][type] = "library"
