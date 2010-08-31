<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function mn_searchlight_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "feeds" && $api == "plugins") {
    return array("version" => 1);
  }
  elseif ($module == "searchlight" && $api == "datasource") {
    return array("version" => 1);
  }
  elseif ($module == "searchlight" && $api == "environment") {
    return array("version" => 1);
  }
}