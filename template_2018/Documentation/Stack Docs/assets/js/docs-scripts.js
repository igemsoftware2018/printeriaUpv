$(document).ready(function(){
    
    $('pre code[class*="{"]').each(function(){
      var code = $(this);
      var classText = code.attr('class');
      code.parent().addClass(classText);
      var lines = classText.replace('language-', '').replace('language-', '').replace('lang-', '').replace('html', '').replace('{','').replace('}','');
      code.parent().attr('data-line', lines);
    });


    $('a[href*="#"]').smoothScroll();

    $('a:not([href*="#"])').attr('target', "_blank");

    var header = $('header');
    var headerHeight = $('header').outerHeight(true);
    var scroll = window.scrollY;
    var scaleAmount = 1;
    var logoScaleAmount = 1;
    var logo = $('header').find('img');

    $(window).scroll(function(){
    	scroll = window.scrollY;
    	if(scroll < headerHeight ){
			scaleAmount = (1.2-(scroll/2500));
			logoScaleAmount = (1+(scroll/1250));
			header.css({
			  '-webkit-transform' : 'scale(' + scaleAmount + ')',
			  '-moz-transform'    : 'scale(' + scaleAmount + ')',
			  '-ms-transform'     : 'scale(' + scaleAmount + ')',
			  '-o-transform'      : 'scale(' + scaleAmount + ')',
			  'transform'         : 'scale(' + scaleAmount + ')'
			});
			logo.css({
			  '-webkit-transform' : 'scale(' + logoScaleAmount + ')',
			  '-moz-transform'    : 'scale(' + logoScaleAmount + ')',
			  '-ms-transform'     : 'scale(' + logoScaleAmount + ')',
			  '-o-transform'      : 'scale(' + logoScaleAmount + ')',
			  'transform'         : 'scale(' + logoScaleAmount + ')'
			});	
    	}
    });

    // Open docs section on click

    function openDocsModule(section){
        if(!$('section[data-slug='+section+']').hasClass('active')){
        	$('section[data-slug='+section+']').addClass('active');
        }
    }

    $('section[data-slug]').click(function(){
    	openDocsModule($(this).attr('data-slug'));
    });

    $('a[data-slug]').click(function(){
    	openDocsModule($(this).attr('data-slug'));
    });

    // Open Intro Section Manually

    $('section[data-slug]:first').addClass('active');

    // Close sections when cross is clicked

    $('.deactivate').click(function(e){
    	$(this).closest('section').removeClass('active');
    	e.stopPropagation();
    	return false;	
    });
 
});

$(window).load(function(){
    if(window.location.hash) {
      console.log(window.location.hash);
      var hash = window.location.hash.replace('#','');
      $('nav a[data-slug="'+hash+'"]').trigger('click');
    }
});