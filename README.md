himoldex.no
===========

This is the Drupal 7 installation behind himoldex.no.

This repo uses a Drush makefile to track Drupal core and modules,
version and any applied patches.

Only features, custom modules and themes are committed to repo.

To get started clone repository as usual, then run

    drush make install.make

which will install Drupal core and all non-custom modules and themes,
*with* patches. Whenever modules are installed, updated or patched,
you should update the makefile (and commit it). Run

    drush make-generate install.make

Read more about this type of development at
http://www.lullabot.com/articles/strategies-for-patch-management

Status
------

This project is a hack:

* The configuration is in the database.
* The Omega sub-theme is hackish.

There is no guarantee that best practive is followed.
