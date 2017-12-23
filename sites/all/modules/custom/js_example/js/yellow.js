(function ($) {
    Drupal.behaviors.jsWeightsYellow = {
        attach: function (context, settings) {
            var weight = settings.jsWeights.yellow;
            var newDiv = $('<div />').css('color', 'yellow').html('I have a weight of ' + weight);
            $('#js-weights').append(newDiv);
        }
    };
})(jQuery);