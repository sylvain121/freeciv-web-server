<?php

$error_msg = NULL;

if (file_exists('php_code/local.php')) {
  $localsettings = fopen('php_code/local.php', 'r');
}

if ($localsettings != NULL) {
  include_once('php_code/local.php');
}

if ($metaserver_url_path == NULL) {
  // Server root
  $metaserver_url_path = '';
}

if ($metaserver_root == NULL) {
  $metaserver_root = '.' . $metaserver_url_path;
}

if ($versions_file == NULL) {
  $versions_file = $metaserver_root . 'versions';
}

if ($fcdb_default_db == NULL) {
  $fcdb_default_db = 'freecivmetaserver';
}

if ($fcdb_metaserver_db == NULL) {
  $fcdb_metaserver_db = 'freecivmetaserver';
}

if ($fcdb_username == NULL) {
  $fcdb_username = 'root';
}

if ($fcdb_pw == NULL) {
  $fcdb_pw = 'changeme';
}

if ($pic_paths == NULL) {
  // Search pics under metaserver directory and under server root.
  $pic_paths = array($metaserver_root . 'pics/' => $metaserver_url_path . 'pics/',
                     $_SERVER[DOCUMENT_ROOT] . 'pics/' => 'pics/');
}

if ($webmaster_name == NULL) {
  $webmaster_name = 'Webmaster';
  $webmaster_default = true;
}

if ($webmaster_addr == NULL && $webmaster_email != NULL) {
  $webmaster_addr = "mailto:$webmaster_email";
}

if ($webmaster_addr == NULL) {
  $webmaster_html = $webmaster_name;
} else {
  $webmaster_html = "<A HREF=\"$webmaster_addr\">$webmaster_name</A>";
}

if ($bugs_addr == NULL) {
  $bugs_html = $bugs_name;
} else {
  if ($bugs_name == NULL) {
    $bugs_link = 'to this address';
  } else {
    $bugs_link = $bugs_name;
  }

  $bugs_html = "<A HREF=\"$bugs_addr\">$bugs_link</A>";
}

if ($metaserver_header == NULL) {
  $metaserver_header = 'Freeciv-web multiplayer games around the world';
}

// Check configuration
if (! file_exists($metaserver_root . '/php_code/php_code_find.php')) {

  $error_msg = "<table border=\"1\" style=\"font-size:xx-small\">\n" .
               "<tr><th>Metaserver installation problem.</th><tr>\n" .
               "<tr><td>" . $lspart . "</td></tr>" . 
               "<tr><td>" .
               "Please contact the maintainer" . $wmpart .
               ".</td></tr>\n</table></font>\n";
}

?>
