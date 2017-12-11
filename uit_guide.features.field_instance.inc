<?php
/**
 * @file
 * uit_guide.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function uit_guide_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-guide-body'.
  $field_instances['node-guide-body'] = array(
    'bundle' => 'guide',
    'default_value' => array(
      0 => array(
        'summary' => '',
        'value' => '<p style="border: 2px dashed; padding: 0.5em; font-size: 1.2em;"><strong>In source mode</strong>, select and edit those components below which are appropriate to your content; delete the rest. You must edit source directly; do not use WYSIWYG when creating or editing guide layout. (It\'s OK to use WYSIWYG to edit text once your layout elements — boxes, tables, etc. — are complete.)</p>

<p class="box" style="border: 2px dashed;">For multi-page or very high-level guides covering tasks/needs with very few solutions, use the following box-button array format for the top (or only) page. If appropriate or necessary for clarity, insert a "lead" intro paragraph (as shown below) between the page title and the array of boxes.</p>

<div class="row-fluid">
<div class="span6 well column">
<h3>Need / use case</h3>

<p>Stanford provides a number of options for blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah.</p>

<p style="text-align: center;"><a class="btn btn-action" href="">Get started</a></p>
</div>

<div class="span6 well column">
<h3>Need / use case</h3>

<p>Stanford provides a number of options for blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah.</p>

<p style="text-align: center;"><a class="btn btn-action" href="">Get started</a></p>
</div>
</div>
<!--break-->

<div class="row-fluid">
<div class="span6 well column">
<h3>Need / use case</h3>

<p>Stanford provides a number of options for blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah.</p>

<p style="text-align: center;"><a class="btn btn-action" href="">Get started</a></p>
</div>

<div class="span6 well column">
<h3>Need / use case</h3>

<p>Stanford provides a number of options for blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah blah.</p>

<p style="text-align: center;"><a class="btn btn-action" href="">Get started</a></p>
</div>
</div>

<p class="box" style="border: 2px dashed;">The following format can be used for second-level or third-level pages of a multi-page guide or for single-page guides, as appropriate.</p>

<p class="lead">Stanford provides a number of options for schools, departments, recognized groups, affiliated individuals, etc., to get such-and-such services or perform such-and-such task. The choices are designed to accommodate a wide range of needs, from elegant and efficient whatevers that conform to university standards, to something more advanced or customized.</p>

<h2>Help me choose …</h2>

<table class="table table-condensed footable">
	<thead>
		<tr>
			<th data-class="expand" style="text-align: left;">I want:</th>
			<th data-hide="phone" style="text-align: center;">option 1</th>
			<th data-hide="phone" style="text-align: center;">option 2</th>
			<th data-hide="phone" style="text-align: center;">option 3</th>
			<th data-hide="phone" style="text-align: center;">option 4</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<td scope="row">&nbsp;</td>
			<td style="text-align: center;"><i class="icon-ok"></i><span class="screen-reader-text">Recommended</span></td>
			<td style="text-align: center;"><span class="screen-reader-text">Not appropriate</span></td>
			<td style="text-align: center;"><span class="screen-reader-text">Not appropriate</span></td>
			<td style="text-align: center;"><i class="icon-ok"></i><span class="screen-reader-text">Recommended</span></td>
		</tr>
		<tr>
			<td scope="row">&nbsp;</td>
			<td style="text-align: center;"><i class="icon-ok"></i><span class="screen-reader-text">Recommended</span></td>
			<td style="text-align: center; color: #bbb;"><i class="icon-ok"></i><span class="screen-reader-text">Optional</span></td>
			<td style="text-align: center; color: #bbb;"><i class="icon-ok"></i><span class="screen-reader-text">Optional</span></td>
			<td style="text-align: center; color: #bbb;"><i class="icon-ok"></i><span class="screen-reader-text">Optional</span></td>
		</tr>
		<tr>
			<td scope="row">&nbsp;</td>
			<td style="text-align: center;"><i class="icon-ok"></i><span class="screen-reader-text">Recommended</span></td>
			<td style="text-align: center; color: #bbb;"><i class="icon-ok"></i><span class="screen-reader-text">Optional</span></td>
			<td style="text-align: center;"><i class="icon-ok"></i><span class="screen-reader-text">Recommended</span></td>
			<td style="text-align: center; color: #bbb;"><i class="icon-ok"></i><span class="screen-reader-text">Optional</span></td>
		</tr>
		<tr>
			<td scope="row">&nbsp;</td>
			<td style="text-align: center;"><span class="screen-reader-text">Not appropriate</span></td>
			<td style="text-align: center;"><span class="screen-reader-text">Not appropriate</span></td>
			<td style="text-align: center;"><span class="screen-reader-text">Not appropriate</span></td>
			<td style="text-align: center;"><i class="icon-ok"></i><span class="screen-reader-text">Recommended</span></td>
		</tr>
		<tr>
			<td scope="row">&nbsp;</td>
			<td style="text-align: center;"><span class="screen-reader-text">Not appropriate</span></td>
			<td style="text-align: center;"><span class="screen-reader-text">Not appropriate</span></td>
			<td style="text-align: center;"><span class="screen-reader-text">Not appropriate</span></td>
			<td style="text-align: center;"><i class="icon-ok"></i><span class="screen-reader-text">Recommended</span></td>
		</tr>
		<tr>
			<td scope="row">Learn more (or Get started)</td>
			<td style="text-align: center;"><a class="btn btn-action" href="">Option 1</a></td>
			<td style="text-align: center;"><a class="btn btn-action" href="">Option 2</a></td>
			<td style="text-align: center;"><a class="btn btn-action" href="">Option 3</a></td>
			<td style="text-align: center;"><a class="btn btn-action" href="">Option 4</a></td>
		</tr>
	</tbody>
</table>

<ul class="legend">
	<li><i class="icon-ok"></i>&nbsp;=&nbsp; Recommended</li>
	<li><span style="color: #bbb;"><i class="icon-ok"></i></span>&nbsp;=&nbsp; Optional</li>
</ul>

<h2>More options</h2>

<ul>
	<li>Go back to the <a href="">perform such-and-such task</a> guide page.</li>
	<li>Dive deeper into <a href="">other guide page (related, more detailed)</a>.</li>
</ul>
',
        'format' => 'full_html',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-guide-field_guide_files'.
  $field_instances['node-guide-field_guide_files'] = array(
    'bundle' => 'guide',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_guide_files',
    'label' => 'Files',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '[current-date:custom:Y]/[current-date:custom:m]/[current-date:custom:d]',
      'file_extensions' => 'svg png jpeg gif pdf ppt doc xls pptx docx xlsx txt xml wav dmg exe conf pem cer crt repo tar.gz m4v mp4 flv',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'plupload' => 'plupload',
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'icon_link' => 0,
          'image' => 0,
          'image_home_page_banner' => 0,
          'image_large' => 0,
          'image_medium' => 0,
          'image_newsletter' => 0,
          'image_newsletter_landscape' => 0,
          'image_newsletter_photo' => 0,
          'image_newsletter_portrait' => 0,
          'image_newsletter_square' => 0,
          'image_phone' => 0,
          'image_screenshot' => 0,
          'image_simplecrop' => 0,
          'image_thumbnail' => 0,
          'image_thumbnail_preview' => 0,
          'image_topic' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-guide-field_guide_images'.
  $field_instances['node-guide-field_guide_images'] = array(
    'bundle' => 'guide',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_guide_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'images/[current-date:custom:Y]/[current-date:custom:m]/[current-date:custom:d]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'plupload' => 'plupload',
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'insert' => 1,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'image',
        'insert_styles' => array(
          'auto' => 0,
          'icon_link' => 0,
          'image' => 'image',
          'image_home_page_banner' => 0,
          'image_large' => 0,
          'image_medium' => 0,
          'image_newsletter' => 0,
          'image_newsletter_landscape' => 0,
          'image_newsletter_photo' => 0,
          'image_newsletter_portrait' => 0,
          'image_newsletter_square' => 0,
          'image_phone' => 0,
          'image_screenshot' => 0,
          'image_simplecrop' => 0,
          'image_thumbnail' => 0,
          'image_thumbnail_preview' => 0,
          'image_topic' => 'image_topic',
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-guide-field_sections'.
  $field_instances['node-guide-field_sections'] = array(
    'bundle' => 'guide',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sections',
    'label' => 'Sections',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'card' => -1,
        'faq' => -1,
        'question_and_answer' => -1,
        'section_generic' => -1,
        'section_with_cards' => 'section_with_cards',
      ),
      'bundle_weights' => array(
        'card' => 2,
        'faq' => 3,
        'question_and_answer' => 4,
        'section_generic' => 5,
        'section_with_cards' => 6,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Section',
      'title_multiple' => 'Sections',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Files');
  t('Images');
  t('Sections');

  return $field_instances;
}
