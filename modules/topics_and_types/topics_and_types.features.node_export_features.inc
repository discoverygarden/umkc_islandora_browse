<?php
/**
 * @file
 * topics_and_types.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function topics_and_types_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'5\',
      \'uid\' => \'1\',
      \'title\' => \'Blues, R&B, Soul\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f728f975-de9f-4478-b467-396aefa95de5\',
      \'nid\' => \'5\',
      \'type\' => \'umkc_islandora_object_topic\',
      \'language\' => \'en\',
      \'created\' => \'1392232620\',
      \'changed\' => \'1392232620\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'0445324b-8856-431f-bba2-9cca4f8cfb47\',
      \'revision_timestamp\' => \'1392232620\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'12\',
            \'uid\' => \'1\',
            \'filename\' => \'BLUES-SOUL.jpg\',
            \'uri\' => \'public://BLUES-SOUL.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'389637\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392232620\',
            \'uuid\' => \'b0d79fae-33de-4f1e-bf78-4eb2f53f02f5\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/mods_subject_topic_ms%3A("Blues, R&B, Soul")\',
            \'title\' => \'Blues, R&B, Soul\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392232620\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'20\',
      \'uid\' => \'1\',
      \'title\' => \'Photographs\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'5af48e7a-31a7-4b45-97f5-f70ce67bbeb0\',
      \'nid\' => \'20\',
      \'type\' => \'umkc_islandora_object_type\',
      \'language\' => \'en\',
      \'created\' => \'1392236843\',
      \'changed\' => \'1392236843\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'088254f8-77c4-476f-a8d7-0094ad9d5fdd\',
      \'revision_timestamp\' => \'1392236843\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'27\',
            \'uid\' => \'1\',
            \'filename\' => \'PHOTOS.jpg\',
            \'uri\' => \'public://PHOTOS.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'357433\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392236843\',
            \'uuid\' => \'03876573-2246-4d3b-8c03-a19129d8f426\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/RELS_EXT_hasModel_uri_ms%3A("info%3Afedora~slsh~umkc%3AphotographsCModel")\',
            \'title\' => \'Photographs\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392236843\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'4\',
      \'uid\' => \'1\',
      \'title\' => \'Jazz Music\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e563d8d4-f500-4506-864f-2ae3fa0bd072\',
      \'nid\' => \'4\',
      \'type\' => \'umkc_islandora_object_topic\',
      \'language\' => \'en\',
      \'created\' => \'1392232405\',
      \'changed\' => \'1392232405\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'10dc0142-3f82-42d2-b4c8-7d2a1b92df83\',
      \'revision_timestamp\' => \'1392232405\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'11\',
            \'uid\' => \'1\',
            \'filename\' => \'JAZZ.jpg\',
            \'uri\' => \'public://JAZZ.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'322870\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392232405\',
            \'uuid\' => \'3e2bf5e8-e06d-4800-87d3-209f42c50bc8\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/mods_subject_topic_ms%3A("Jazz Music")\',
            \'title\' => \'Jazz Music\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392232405\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'1\',
      \'title\' => \'Kansas City Jazz\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'9f6386b4-3a99-4679-bc5d-f535941daf0e\',
      \'nid\' => \'2\',
      \'type\' => \'umkc_islandora_object_topic\',
      \'language\' => \'en\',
      \'created\' => \'1392231223\',
      \'changed\' => \'1392231223\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'1ed22cd6-9501-45be-9dc0-f24ef682311d\',
      \'revision_timestamp\' => \'1392231223\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'9\',
            \'uid\' => \'1\',
            \'filename\' => \'KCJAZZ.jpg\',
            \'uri\' => \'public://KCJAZZ.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'527948\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392231223\',
            \'uuid\' => \'cfbff624-ed06-47e0-bed8-0484eb73ca6a\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/mods_subject_topic_ms%3A("Kansas City Jazz")\',
            \'title\' => \'Kansas City Jazz\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392231223\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'6\',
      \'uid\' => \'1\',
      \'title\' => \'Music Industry/Business\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'17199333-4d34-44f5-a7d4-0419cebafd14\',
      \'nid\' => \'6\',
      \'type\' => \'umkc_islandora_object_topic\',
      \'language\' => \'en\',
      \'created\' => \'1392232684\',
      \'changed\' => \'1392232684\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'216c3560-0a16-46c7-a05e-2fb23f700caf\',
      \'revision_timestamp\' => \'1392232684\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'13\',
            \'uid\' => \'1\',
            \'filename\' => \'MUSIC-BIZ.jpg\',
            \'uri\' => \'public://MUSIC-BIZ.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'355274\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392232684\',
            \'uuid\' => \'5eb02568-4270-44b3-b72e-ca3ff68dd108\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/mods_subject_topic_ms%3A("Music Industry/Business")\',
            \'title\' => \'Music Industry/Business\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392232684\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'21\',
      \'uid\' => \'1\',
      \'title\' => \'Posters\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'09e93dec-1e56-4a79-979e-3f5484837543\',
      \'nid\' => \'21\',
      \'type\' => \'umkc_islandora_object_type\',
      \'language\' => \'en\',
      \'created\' => \'1392236934\',
      \'changed\' => \'1392236934\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'246b2d44-48e8-4895-bbe8-374b7a42e531\',
      \'revision_timestamp\' => \'1392236934\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'28\',
            \'uid\' => \'1\',
            \'filename\' => \'POSTERS.jpg\',
            \'uri\' => \'public://POSTERS.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'392539\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392236934\',
            \'uuid\' => \'acd6a338-4088-4008-a8e6-0df2de99c1ce\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/RELS_EXT_hasModel_uri_ms%3A("info%3Afedora~slsh~umkc%3ApostersCModel")\',
            \'title\' => \'Posters\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392236934\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'12\',
      \'uid\' => \'1\',
      \'title\' => \'Government\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e8860e72-58a0-455e-9702-b2f560dbcf72\',
      \'nid\' => \'12\',
      \'type\' => \'umkc_islandora_object_topic\',
      \'language\' => \'en\',
      \'created\' => \'1392233152\',
      \'changed\' => \'1392233152\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3163be40-9e4d-4427-b6ca-eb8660e0f07f\',
      \'revision_timestamp\' => \'1392233152\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'19\',
            \'uid\' => \'1\',
            \'filename\' => \'GOVT.jpg\',
            \'uri\' => \'public://GOVT.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'492049\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392233152\',
            \'uuid\' => \'f8763ebd-d0e5-4403-81cd-0db09f255f7a\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/mods_subject_topic_ms%3A("Government")\',
            \'title\' => \'Government\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392233152\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'13\',
      \'uid\' => \'1\',
      \'title\' => \'Books\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'677d2a9b-5c9e-4861-b89e-b78960ea0da7\',
      \'nid\' => \'13\',
      \'type\' => \'umkc_islandora_object_type\',
      \'language\' => \'en\',
      \'created\' => \'1392234501\',
      \'changed\' => \'1392234916\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'32330235-1aba-48b8-8686-9568cc999297\',
      \'revision_timestamp\' => \'1392234916\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'20\',
            \'uid\' => \'1\',
            \'filename\' => \'BOOKS.jpg\',
            \'uri\' => \'public://BOOKS.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'426041\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392234501\',
            \'uuid\' => \'60f2db75-9949-48cc-95bb-caa2111ac14e\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/RELS_EXT_hasModel_uri_ms%3A("info%3Afedora~slsh~umkc%3AbookCModel")\',
            \'title\' => \'Books\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392234501\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'10\',
      \'uid\' => \'1\',
      \'title\' => \'LGBT Community\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'5ee5b562-47f6-4959-92cb-df65af2a2679\',
      \'nid\' => \'10\',
      \'type\' => \'umkc_islandora_object_topic\',
      \'language\' => \'en\',
      \'created\' => \'1392232995\',
      \'changed\' => \'1392232995\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'49592fda-4da3-4a82-aa4d-294916efdcee\',
      \'revision_timestamp\' => \'1392232995\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'17\',
            \'uid\' => \'1\',
            \'filename\' => \'LGBT.jpg\',
            \'uri\' => \'public://LGBT.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'434737\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392232995\',
            \'uuid\' => \'5aa337d0-2aed-46f5-9c27-a94d7a7926bb\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/mods_subject_topic_ms%3A("LGBT Community")\',
            \'title\' => \'LGBT Community\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392232995\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'17\',
      \'uid\' => \'1\',
      \'title\' => \'Newsletters\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'02f0f918-df82-41ee-b6a2-fe9ffb538141\',
      \'nid\' => \'17\',
      \'type\' => \'umkc_islandora_object_type\',
      \'language\' => \'en\',
      \'created\' => \'1392236148\',
      \'changed\' => \'1392236148\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'569e0388-bb0e-4a55-818e-55bb485b68a4\',
      \'revision_timestamp\' => \'1392236148\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'24\',
            \'uid\' => \'1\',
            \'filename\' => \'NEWSLETTERS.jpg\',
            \'uri\' => \'public://NEWSLETTERS.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'449393\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392236148\',
            \'uuid\' => \'5a77d6d1-fc05-468e-a9f1-0f07a12a2ec1\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/RELS_EXT_hasModel_uri_ms%3A("info%3Afedora~slsh~umkc%3AnewslettersCModel")\',
            \'title\' => \'Newsletters\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392236148\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'19\',
      \'uid\' => \'1\',
      \'title\' => \'Pamphlets\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'784e6845-971c-4c54-8277-ecd9f55ac2d4\',
      \'nid\' => \'19\',
      \'type\' => \'umkc_islandora_object_type\',
      \'language\' => \'en\',
      \'created\' => \'1392236659\',
      \'changed\' => \'1392236659\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5a3a21ec-2f7a-4903-9761-193852cbb6a6\',
      \'revision_timestamp\' => \'1392236659\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'26\',
            \'uid\' => \'1\',
            \'filename\' => \'PAMPHLETS.jpg\',
            \'uri\' => \'public://PAMPHLETS.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'220436\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392236659\',
            \'uuid\' => \'7ce19078-c5e9-4f28-9368-0737855864cf\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/RELS_EXT_hasModel_uri_ms%3A("info%3Afedora~slsh~umkc%3ApamphletsCModel")\',
            \'title\' => \'Pamphlets\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392236659\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'9\',
      \'uid\' => \'1\',
      \'title\' => \'Media/Broadcasting\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f3d2822e-2425-4fb7-9802-7510e87bf30d\',
      \'nid\' => \'9\',
      \'type\' => \'umkc_islandora_object_topic\',
      \'language\' => \'en\',
      \'created\' => \'1392232831\',
      \'changed\' => \'1392232831\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'643f3548-bb9f-49c7-b246-7462e826b8cd\',
      \'revision_timestamp\' => \'1392232831\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'16\',
            \'uid\' => \'1\',
            \'filename\' => \'MEDIA.jpg\',
            \'uri\' => \'public://MEDIA.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'307979\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392232831\',
            \'uuid\' => \'4b38b2eb-4003-4ca6-99e0-b2a31f8a968b\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/mods_subject_topic_ms%3A("Media/Broadcasting")\',
            \'title\' => \'Media/Broadcasting\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392232831\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'15\',
      \'uid\' => \'1\',
      \'title\' => \'Manuscripts\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'d0a803d8-9142-4d18-a577-a8813285de75\',
      \'nid\' => \'15\',
      \'type\' => \'umkc_islandora_object_type\',
      \'language\' => \'en\',
      \'created\' => \'1392235709\',
      \'changed\' => \'1392235709\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6685ebe0-46db-4d76-a29e-b6f567d1c314\',
      \'revision_timestamp\' => \'1392235709\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'22\',
            \'uid\' => \'1\',
            \'filename\' => \'MANUSCRIPTS.jpg\',
            \'uri\' => \'public://MANUSCRIPTS.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'529319\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392235709\',
            \'uuid\' => \'1a9dc89e-fee2-4775-8d82-42fc72d92144\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/RELS_EXT_hasModel_uri_ms%3A("info%3Afedora~slsh~umkc%3AmanuscriptsCModel")\',
            \'title\' => \'Manuscripts\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392235709\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'18\',
      \'uid\' => \'1\',
      \'title\' => \'Newspapers\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'5df6e297-0218-416c-a5a6-830c778f073a\',
      \'nid\' => \'18\',
      \'type\' => \'umkc_islandora_object_type\',
      \'language\' => \'en\',
      \'created\' => \'1392236232\',
      \'changed\' => \'1392236232\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6b1431db-ba45-4f4f-812f-22d31b419dac\',
      \'revision_timestamp\' => \'1392236232\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'25\',
            \'uid\' => \'1\',
            \'filename\' => \'NEWSPAPERS.jpg\',
            \'uri\' => \'public://NEWSPAPERS.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'729326\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392236232\',
            \'uuid\' => \'19241cf4-e140-4b32-935c-88eebb2ec6dd\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/RELS_EXT_hasModel_uri_ms%3A("info%3Afedora~slsh~umkc%3AnewspapersCModel")\',
            \'title\' => \'Newspapers\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392236232\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'24\',
      \'uid\' => \'1\',
      \'title\' => \'Sound Recordings\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'62d9efaf-4326-4ac7-a76b-5f060b7e2b93\',
      \'nid\' => \'24\',
      \'type\' => \'umkc_islandora_object_type\',
      \'language\' => \'en\',
      \'created\' => \'1392237383\',
      \'changed\' => \'1392237383\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'6ff16b6d-cd52-4df5-9824-3ef7deff42f4\',
      \'revision_timestamp\' => \'1392237383\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'31\',
            \'uid\' => \'1\',
            \'filename\' => \'AUDIO.png\',
            \'uri\' => \'public://AUDIO.png\',
            \'filemime\' => \'image/png\',
            \'filesize\' => \'1462681\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392237383\',
            \'uuid\' => \'a841ee63-c255-4c15-bde5-c6ae69911918\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/RELS_EXT_hasModel_uri_ms%3A("info%3Afedora~slsh~umkc%3AsoundCModel")\',
            \'title\' => \'Sound Recordings\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392237383\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'8\',
      \'uid\' => \'1\',
      \'title\' => \'Art and Literature\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'71a1a047-f631-41fc-9280-8efbeb9d6ff2\',
      \'nid\' => \'8\',
      \'type\' => \'umkc_islandora_object_topic\',
      \'language\' => \'en\',
      \'created\' => \'1392232784\',
      \'changed\' => \'1392232784\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'772710a4-235c-4cbd-a391-97f0cfb7d7a6\',
      \'revision_timestamp\' => \'1392232784\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'15\',
            \'uid\' => \'1\',
            \'filename\' => \'ART-LIT.jpg\',
            \'uri\' => \'public://ART-LIT.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'635727\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392232784\',
            \'uuid\' => \'3c20ca1c-8a99-4d4a-af14-9817af4b0d34\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/mods_subject_topic_ms%3A("Art and Literature")\',
            \'title\' => \'Art and Literature\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392232784\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'14\',
      \'uid\' => \'1\',
      \'title\' => \'Graphics\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'e6b58de7-7760-4998-87bd-8e61e0b81534\',
      \'nid\' => \'14\',
      \'type\' => \'umkc_islandora_object_type\',
      \'language\' => \'en\',
      \'created\' => \'1392234782\',
      \'changed\' => \'1392234782\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'973fe6a5-4bda-4270-9f94-24ea11623b3c\',
      \'revision_timestamp\' => \'1392234782\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'21\',
            \'uid\' => \'1\',
            \'filename\' => \'GRAPHICS.jpg\',
            \'uri\' => \'public://GRAPHICS.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'535495\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392234782\',
            \'uuid\' => \'196a9a52-de14-4968-b80d-c5422aa9d63d\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/RELS_EXT_hasModel_uri_ms%3A("info%3Afedora~slsh~umkc%3AgraphicsCModel")\',
            \'title\' => \'Graphics\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392234782\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'26\',
      \'uid\' => \'1\',
      \'title\' => \'Yearbooks\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a751b471-fb90-4fc3-9f4f-1f11284b8fe3\',
      \'nid\' => \'26\',
      \'type\' => \'umkc_islandora_object_type\',
      \'language\' => \'en\',
      \'created\' => \'1392237492\',
      \'changed\' => \'1392237492\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'9973eb77-3493-49a3-bc19-4a3a2152ee50\',
      \'revision_timestamp\' => \'1392237492\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'33\',
            \'uid\' => \'1\',
            \'filename\' => \'YEARBOOKS.jpg\',
            \'uri\' => \'public://YEARBOOKS.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'446437\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392237492\',
            \'uuid\' => \'c72e348e-b418-4a76-a09c-418093869063\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/RELS_EXT_hasModel_uri_ms%3A("info%3Afedora~slsh~umkc%3AyearbooksCModel")\',
            \'title\' => \'Yearbooks\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392237492\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'7\',
      \'uid\' => \'1\',
      \'title\' => \'Kansas City History\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a690e872-8de6-4bc7-90cc-345547a6bf16\',
      \'nid\' => \'7\',
      \'type\' => \'umkc_islandora_object_topic\',
      \'language\' => \'en\',
      \'created\' => \'1392232734\',
      \'changed\' => \'1392232734\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'9ded4b32-d8ec-464a-833d-2370a54a19bd\',
      \'revision_timestamp\' => \'1392232734\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'14\',
            \'uid\' => \'1\',
            \'filename\' => \'KCHISTORY.jpg\',
            \'uri\' => \'public://KCHISTORY.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'493972\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392232734\',
            \'uuid\' => \'75bad92b-5433-436a-8d11-75e1dfd75ea8\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/mods_subject_topic_ms%3A("Kansas City History")\',
            \'title\' => \'Kansas City History\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392232734\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'16\',
      \'uid\' => \'1\',
      \'title\' => \'Maps and Atlases\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'fcb85a80-bacf-4d1c-b00d-ba617abb7aa8\',
      \'nid\' => \'16\',
      \'type\' => \'umkc_islandora_object_type\',
      \'language\' => \'en\',
      \'created\' => \'1392236005\',
      \'changed\' => \'1392236005\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'a2cb3191-e2e6-4cf5-afd0-b8f2f3ef1aaa\',
      \'revision_timestamp\' => \'1392236005\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'23\',
            \'uid\' => \'1\',
            \'filename\' => \'MAPS-ATLASES.jpg\',
            \'uri\' => \'public://MAPS-ATLASES.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'593587\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392236005\',
            \'uuid\' => \'49626dfe-7296-4c02-bd3e-ca02e9ee4b83\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/RELS_EXT_hasModel_uri_ms%3A("info%3Afedora~slsh~umkc%3AmapsandatlasesCModel")\',
            \'title\' => \'Maps and Atlases\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392236005\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'3\',
      \'uid\' => \'1\',
      \'title\' => \'Classical Music\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'21de0cbf-a0ab-438d-9fcb-953e1d6ea01b\',
      \'nid\' => \'3\',
      \'type\' => \'umkc_islandora_object_topic\',
      \'language\' => \'en\',
      \'created\' => \'1392231824\',
      \'changed\' => \'1392231824\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'aad277a7-f142-4aba-882c-e9b287dcfac8\',
      \'revision_timestamp\' => \'1392231824\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'10\',
            \'uid\' => \'1\',
            \'filename\' => \'CLASSICAL.jpg\',
            \'uri\' => \'public://CLASSICAL.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'294268\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392231824\',
            \'uuid\' => \'36ab36bf-e377-4015-9c20-22425a85169f\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/mods_subject_topic_ms%3A("Classical Music")\',
            \'title\' => \'Classical Music\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392231824\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'23\',
      \'uid\' => \'1\',
      \'title\' => \'Sheet Music\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'63540c4b-06ff-459f-897e-d760c8f697a9\',
      \'nid\' => \'23\',
      \'type\' => \'umkc_islandora_object_type\',
      \'language\' => \'en\',
      \'created\' => \'1392237275\',
      \'changed\' => \'1392237275\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'add123a0-4ab2-425d-8d5b-7d852088796e\',
      \'revision_timestamp\' => \'1392237275\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'30\',
            \'uid\' => \'1\',
            \'filename\' => \'SHEETMUSIC.jpg\',
            \'uri\' => \'public://SHEETMUSIC.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'443136\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392237275\',
            \'uuid\' => \'f7f70f9b-7885-46fd-afb4-5399572fe551\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/RELS_EXT_hasModel_uri_ms%3A("info%3Afedora~slsh~umkc%3AsheetmusicCModel")\',
            \'title\' => \'Sheet Music\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392237275\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'11\',
      \'uid\' => \'1\',
      \'title\' => \'Women\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ee830fa5-5257-42f0-9f6e-a00f3f3df653\',
      \'nid\' => \'11\',
      \'type\' => \'umkc_islandora_object_topic\',
      \'language\' => \'en\',
      \'created\' => \'1392233069\',
      \'changed\' => \'1392233069\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b5470dc3-e0fd-4fe6-b8aa-d7eb5fc3acbb\',
      \'revision_timestamp\' => \'1392233069\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'18\',
            \'uid\' => \'1\',
            \'filename\' => \'WOMEN.jpg\',
            \'uri\' => \'public://WOMEN.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'363648\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392233069\',
            \'uuid\' => \'531b9c6d-0780-4ade-aa0c-21b9c6ad4ee5\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/mods_subject_topic_ms%3A("Women")\',
            \'title\' => \'Women\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392233069\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'22\',
      \'uid\' => \'1\',
      \'title\' => \'Scrapbooks\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'ddd9ec12-f352-4ae4-a403-29c92abf34c1\',
      \'nid\' => \'22\',
      \'type\' => \'umkc_islandora_object_type\',
      \'language\' => \'en\',
      \'created\' => \'1392237208\',
      \'changed\' => \'1392237208\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'ddca0195-6cd5-45e6-bab0-714d2e20a2bd\',
      \'revision_timestamp\' => \'1392237208\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'29\',
            \'uid\' => \'1\',
            \'filename\' => \'SCRAPBOOKS.jpg\',
            \'uri\' => \'public://SCRAPBOOKS.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'559760\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392237208\',
            \'uuid\' => \'2d0cc76e-04eb-419e-84c0-cee92abb76fe\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/RELS_EXT_hasModel_uri_ms%3A("info%3Afedora~slsh~umkc%3AscrapbooksCModel")\',
            \'title\' => \'Scrapbooks\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392237208\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'25\',
      \'uid\' => \'1\',
      \'title\' => \'Video Recordings\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'46d79433-d530-4a59-9849-5936afc63adc\',
      \'nid\' => \'25\',
      \'type\' => \'umkc_islandora_object_type\',
      \'language\' => \'en\',
      \'created\' => \'1392237435\',
      \'changed\' => \'1392237435\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'fdc87341-0668-483f-a4d5-405dfa919330\',
      \'revision_timestamp\' => \'1392237435\',
      \'revision_uid\' => \'1\',
      \'field_thumbnail\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'32\',
            \'uid\' => \'1\',
            \'filename\' => \'VIDEO.jpg\',
            \'uri\' => \'public://VIDEO.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'395457\',
            \'status\' => \'1\',
            \'timestamp\' => \'1392237435\',
            \'uuid\' => \'91eae586-f774-443c-a5e2-1bdc2032699c\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'750\',
            \'height\' => \'750\',
          ),
        ),
      ),
      \'field_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'/islandora/search/RELS_EXT_hasModel_uri_ms%3A("info%3Afedora~slsh~umkc%3AvideoCModel")\',
            \'title\' => \'Video Recordings\',
            \'attributes\' => array(),
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1392237435\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'name\' => \'islandora\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
