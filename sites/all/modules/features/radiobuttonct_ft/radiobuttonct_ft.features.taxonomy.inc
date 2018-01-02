<?php
/**
 * @file
 * radiobuttonct_ft.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function radiobuttonct_ft_taxonomy_default_vocabularies() {
  return array(
    'radiobuttonbtns' => array(
      'name' => 'radiobuttonBtns',
      'machine_name' => 'radiobuttonbtns',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
