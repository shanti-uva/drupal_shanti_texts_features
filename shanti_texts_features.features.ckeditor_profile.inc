<?php
/**
 * @file
 * shanti_texts_features.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function shanti_texts_features_ckeditor_profile_defaults() {
  $data = array(
    'CKEditor Global Profile' => array(
      'name' => 'CKEditor Global Profile',
      'settings' => array(
        'skin' => 'moono',
        'ckeditor_path' => '//cdn.ckeditor.com/4.5.3/full-all',
        'ckeditor_local_path' => '',
        'ckeditor_plugins_path' => '%m/plugins',
        'ckeditor_plugins_local_path' => '',
        'ckfinder_path' => '%m/ckfinder',
        'ckfinder_local_path' => '',
        'ckeditor_aggregate' => 'f',
        'toolbar_wizard' => 'f',
        'loadPlugins' => array(),
      ),
      'input_formats' => array(),
    ),
    'Full' => array(
      'name' => 'Full',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Bold\',\'Italic\',\'Underline\',\'Strike\',\'-\',\'Subscript\',\'Superscript\',\'NumberedList\',\'BulletedList\',\'Outdent\',\'Indent\',\'Blockquote\',\'CreateDiv\'],
    [\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\',\'JustifyBlock\',\'-\',\'BidiLtr\',\'BidiRtl\'],
    [\'Find\',\'Replace\',\'Mathjax\'],
    \'/\',
    [\'Format\',\'Styles\',\'-\',\'Cut\',\'Copy\',\'Paste\',\'PasteText\',\'PasteFromWord\'],
    [\'Footnotes\',\'node\',\'Unlink\',\'Link\',\'Anchor\',\'Media\',\'Table\',\'HorizontalRule\',\'SpecialChar\'],
    [\'Source\',\'ShowBlocks\',\'Maximize\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 'f',
        'uicolor' => 'default',
        'uicolor_user' => '#D3D3D3',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 'f',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 't',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterClose' => 'breakAfterClose',
            'pre_indent' => 'pre_indent',
            'breakAfterOpen' => 0,
            'breakBeforeClose' => 0,
          ),
        ),
        'css_mode' => 'theme',
        'css_path' => '',
        'css_style' => 'self',
        'styles_path' => '%tjs/ckeditor.styles.js?v1',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 't',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'ckeditor_link' => array(
            'name' => 'drupal_path',
            'desc' => 'CKEditor Link - A plugin to easily create links to Drupal internal paths',
            'path' => '%base_path%sites/all/modules/ckeditor_link/plugins/link/',
          ),
          'codemirror' => array(
            'name' => 'codemirror',
            'desc' => 'Plugin file: codemirror',
            'path' => '%plugin_dir%codemirror/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'footnotes' => array(
            'name' => 'footnotes',
            'desc' => 'SHANTI verson of CKEditor Footnotes.',
            'path' => '%base_path%sites/all/modules/shanti_footnotes/modules/shanti_footnotes_ckeditor/plugin/',
            'default' => 't',
            'buttons' => array(
              'footnotes' => array(
                'icon' => 'icons/footnotes.png',
                'label' => 'Insert footnote',
              ),
            ),
          ),
          'mathjax' => array(
            'name' => 'mathjax',
            'desc' => 'Plugin for inserting Mathematical Formula (MathJax). See <a href="http://ckeditor.com/addon/mathjax">addon page</a> for more details. See <a href="/admin/help/ckeditor#mathjax">help</a> for additional instructions.',
            'path' => '//cdn.ckeditor.com/4.5.3/full-all/plugins/mathjax/',
            'buttons' => array(
              'Mathjax' => array(
                'icon' => 'icons/mathjax.png',
                'label' => 'Insert Mathematical Formulas',
              ),
            ),
            'default' => 'f',
          ),
          'media' => array(
            'name' => 'media',
            'desc' => 'Plugin for inserting images from Drupal media module',
            'path' => '%base_path%sites/all/modules/media/modules/media_wysiwyg/wysiwyg_plugins/media_ckeditor/',
            'buttons' => array(
              'Media' => array(
                'icon' => 'images/icon.gif',
                'label' => 'Add media',
              ),
            ),
            'default' => 'f',
          ),
        ),
      ),
      'input_formats' => array(
        'full_html' => 'Full HTML',
      ),
    ),
  );
  return $data;
}
