var tl = gsap.timeline();


tl.from(".logo, .navbar-nav,.header-button-1,.header-button-2",{

    y: "-60px",
    // opacity: 0,
    // delay: 0,
    duration:0.7,
    stagger:0.2 

})


var tl2 = gsap.timeline();

tl2.from(".sec-2-col-1,.sec-2-col-2",{
    x : "-150px",
    opacity : 0,
    duration : 0.7,
    stagger : 0.2

})


gsap.registerPlugin(ScrollTrigger);

var tl6 = gsap.timeline();

tl6.from(".section-5-1, .section-5-2, .section-5-3, .section-5-4", {
    y: "100px",
    opacity: 0,
    duration: 0.7,
    stagger: 0.2 
});

ScrollTrigger.create({
    trigger: ".section-5-1", 
    start: "top 80%", 
    end: "bottom 20%", 
    animation: tl6, 
   
});




////////////////////////////// ggggggggggggggggggggggg /////////////////////////////////



// Timeline 3
var tl3 = gsap.timeline({
  scrollTrigger: {
    trigger: ".sec-4-image",
    scroller: "body",
    start: "top 40%",
    // scrub:true,
    end: "top 30%"
  }
});

tl3.from(".sec-4-image", {
  x: "-150px",
  opacity: 0,
  duration: 0.7,
  stagger: 0.2
});

// Timeline 4
var tl4 = gsap.timeline({
  scrollTrigger: {
    trigger: ".inner-sec-4-1",
    scroller: "body",
    start: "top 40%",
    // scrub:true,
    end: "top 30%"
  }
});

tl4.from(".inner-sec-4-1, .inner-sec-4-2, .inner-sec-4-3, .inner-sec-4-4", {
  x: "150px",
  opacity: 0,
  duration: 0.7,
  stagger: 0.2
});





/////////////////////////////////////////////////////////////////////////////////////////////////////////

gsap.from(".section-3",{
  y : "100px",
  opacity : 0,
  scrollTrigger: {
    trigger: ".section-3",
    scroller: "body",
    // markers:true,
    start: "top 80%",
    // scrub:true,
    end:"top 30%"
  }
})

















//////////////////////////////////// j query ////////////////////////////


$(document).ready(function(){
  $(".inner-sec-4-1").click(function(){
    $(".inner-sec-4-1").addClass("toggle");
    $(".inner-sec-4-2").removeClass("toggle");
    $(".inner-sec-4-3").removeClass("toggle");
    $(".inner-sec-4-4").removeClass("toggle");
  });

  $(".inner-sec-4-2").click(function(){
    $(".inner-sec-4-1").removeClass("toggle");
    $(".inner-sec-4-2").addClass("toggle");
    $(".inner-sec-4-3").removeClass("toggle");
    $(".inner-sec-4-4").removeClass("toggle");
  });

  $(".inner-sec-4-3").click(function(){
    $(".inner-sec-4-1").removeClass("toggle");
    $(".inner-sec-4-2").removeClass("toggle");
    $(".inner-sec-4-3").addClass("toggle");
    $(".inner-sec-4-4").removeClass("toggle");
  });

  $(".inner-sec-4-4").click(function(){
    $(".inner-sec-4-1").removeClass("toggle");
    $(".inner-sec-4-2").removeClass("toggle");
    $(".inner-sec-4-3").removeClass("toggle");
    $(".inner-sec-4-4").addClass("toggle");
  });
});









/////////////////////////////////////////////////////////////



var tl7 = gsap.timeline({
  scrollTrigger: {
    trigger: "#section-6-inner-id-1",
    start: "top center", 
    end: "bottom center", 
    toggleActions: "play none none none" 
  }
});

tl7.from("#section-6-inner-id-1, #section-6-inner-id-2, #section-6-inner-id-3", {
  y: "200px",
  opacity: 0,
  duration: 0.7,
  stagger: 0.2
});









gsap.registerPlugin(ScrollTrigger);

var tl10 = gsap.timeline({
    scrollTrigger: {
        trigger: "#section-7-col-1", 
        start: "top 80%", 
        end: "bottom 20%", 
    }
});

tl10.from("#section-7-col-1, #section-7-col-3", {
    x: "-150px",
    opacity: 0,
    duration: 0.7,
    stagger: 0.2
});

var tl11 = gsap.timeline({
    scrollTrigger: {
        trigger: "#section-7-col-2",
        start: "top 80%",
        end: "bottom 20%",
        
    }
});

tl11.from("#section-7-col-2, #section-7-col-4", {
    x: "150px",
    opacity: 0,
    duration: 0.7,
    stagger: 0.2
});









var tl12 = gsap.timeline({
  scrollTrigger: {
    trigger: ".span-1", // Replace ".your-trigger-element" with the selector for the element you want to trigger the animation
    start: "top 80%", // Adjust this as needed
    end: "bottom 20%", // Adjust this as needed
    
    
  }
});

tl12.from(".span-1, .h2-1, .pre-btn, .next-btn, .content-p-1, .DP, .content-p-2", {
  y: "100px",
  opacity: 0,
  duration: 0.7,
  stagger: 0.2
});























// Function to start the counter animation
function startCounterAnimation() {
  const counters = document.querySelectorAll('.section-9-span-1, .count-span-2-1');
  const duration = 3000; // 3 seconds in milliseconds

  counters.forEach(counter => {
    const target = +counter.getAttribute('data-target');
    const initialCount = +counter.innerText;
    const increment = Math.ceil((target - initialCount) / (duration / 10)); // Increment calculation

    let currentCount = initialCount;
    const updateCount = () => {
      if (currentCount < target) {
        currentCount += increment;
        counter.innerText = currentCount;
        setTimeout(updateCount, 30);
      } else {
        counter.innerText = target;
      }
    };

    updateCount();
  });
}

// Call the counter animation when the page is loaded
document.addEventListener('DOMContentLoaded', startCounterAnimation);









gsap.registerPlugin(ScrollTrigger);

var tl13 = gsap.timeline({
    scrollTrigger: {
        trigger: ".section-9-image",
        start: "top 20%", 
        end: "bottom 80%",
        
    }
});

tl13.from(".section-9-image", {
    x: "-200px",
    opacity: 0,
    duration: 0.7,
    stagger: 0.2
});

var tl14 = gsap.timeline({
    scrollTrigger: {
        trigger: "#sec-9-s1",
        start: "top 20%", 
        end: "bottom 80%", 

    }
});

tl14.from("#sec-9-s1, .sec-9-s1, .section-9-p-1, .section-9-p-2, .sec-9-li-1, .sec-9-li-2, .sec-9-li-3,.section-9-normal-div,.count-2", {
    x: "200px",
    opacity: 0,
    duration: 0.7,
    stagger: 0.2
});
















gsap.registerPlugin(ScrollTrigger);

var tl15 = gsap.timeline({
  scrollTrigger: {
    trigger: ".section-10-h2-1",
    start: "top 35%", 
    end: "bottom 80%",
  }
});

tl15.from(".section-10-h2-1, .section-10-p-1, .section-10-inner-main-1, .section-10-inner-main-2, .section-10-inner-main-3", {
  y: "150px",
  opacity: 0,
  duration: 0.7,
  stagger: 0.2
});


/////////////////// footer 












gsap.registerPlugin(ScrollTrigger);

var tl16 = gsap.timeline({
  scrollTrigger: {
    trigger: ".f1",
    start: "top 40%", 
    end: "bottom 80%",
    // markers:true,
  }
});

tl16.from(".f1,.f2,.f3,.f4,.f5,.f6,.f6,.f7,.f8,.f9,.f10,.f11,.f12,.f13,.f14,.f15,.f16,.f17,.f18,.f19,.f20", {
  x: "-150px",
  opacity: 0,
  duration: 0.5 ,
  stagger: 0.01
});