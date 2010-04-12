// $Id$

Drupal.behaviors.drhCoreFront = function (context) {
//  $('.field-field-image-front-off').hide();

  $('.front .teaser').hover(
    function () {
      $(this).find('.field-field-image-front-on').fadeOut();
//      $(this).find('.field-field-image-front-off').fadeIn('slow');
    },
    function () {
//      $(this).find('.field-field-image-front-off').fadeOut('fast');
      $(this).find('.field-field-image-front-on').fadeIn();
    }
  );
}
