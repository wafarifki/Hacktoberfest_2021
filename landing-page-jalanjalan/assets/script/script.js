const CONTAINER = document.getElementById("container");

// Global fungsi untuk mengatur atribut class secara massal / lebih dari 1
function addClasses(...dataClass) {
    for (let data of dataClass) {
        data.el.classList.add(data.class);
    }
}

function removeClasses(...dataClass) {
    for (let data of dataClass) {
        data.el.classList.remove(data.class);
    }
}

function toggleClasses(...dataClass) {
    for (let data of dataClass) {
        data.el.classList.toggle(data.class);
    }
}

// Bagian untuk mengatur button-to-top trigger
function scrollControlElementTop() {
    window.scrollTo({
        top: 0,
        behavior: "smooth"
    });
}

function elementTopHandler() {
    let elementTop = document.createElement("section");
    elementTop.id = "btn_to_top";
    elementTop.innerHTML = '\n<div id="container_btn_to_top">\n<img src="./assets/image/icon/arrow.png">\n</div>';
    elementTop.addEventListener("click", scrollControlElementTop);

    return elementTop;
}
CONTAINER.insertAdjacentElement("beforeend", elementTopHandler());

// Bagian untuk mengatur navigasi menjadi dinamis / fixed
let navigator = document.getElementById("header_web");
let btnTop = document.getElementById('btn_to_top');
const TIMER_NAV = 300;

let containerNav = document.getElementById("header_web");
let containerFixedNav = containerNav.cloneNode(true);
let mainNav = containerFixedNav.querySelector('#header_menu');
let formControl = document.createElement('form');
formControl.id = 'search_fixed';
formControl.innerHTML = '<input type="text" id="search_fixed__input">\n<button id="search_fixed__button"><img src="./assets/image/icon/search.png"></button>';

mainNav.insertAdjacentElement('beforeend', formControl);

function addClassToNavigatorAndbtnTop(navigatorClass, btnTopClass) {
    addClasses({
        el: navigator,
        class: navigatorClass
    }, {
        el: btnTop,
        class: btnTopClass
    });
}

function removeClassToNavigatorAndbtnTop(navigatorClass, btnTopClass) {
    removeClasses({
        el: navigator,
        class: navigatorClass
    }, {
        el: btnTop,
        class: btnTopClass
    });
}

function timerHandler() {
    removeClassToNavigatorAndbtnTop('pros_nav', 'pros_topbtn');
}

function scrollFixedElementHandler() {
    if (window.pageYOffset >= 600) {
        addClasses({
            el: containerFixedNav,
            class: 'fixed_nav'
        }, {
            el: btnTop,
            class: 'show_topbtn'
        });

        containerNav.replaceWith(containerFixedNav);
    } else {
        if (containerFixedNav.classList.contains("fixed_nav")) {
            addClasses({
                el: containerFixedNav,
                class: 'pros_nav'
            }, {
                el: btnTop,
                class: 'pros_topbtn'
            });

            setTimeout(function () {
                removeClasses({
                    el: containerFixedNav,
                    class: 'pros_nav'
                }, {
                    el: btnTop,
                    class: 'pros_topbtn'
                });
                containerFixedNav.replaceWith(containerNav);
            }, TIMER_NAV);

        }
        removeClasses({
            el: containerFixedNav,
            class: 'fixed_nav'
        }, {
            el: btnTop,
            class: 'show_topbtn'
        });
    }
}

document.addEventListener("scroll", scrollFixedElementHandler);

// Parallax control
let sectionParallax = document.getElementById("cover_main");

function parallaxHandler() {
    let offset = window.pageYOffset;
    sectionParallax.style.backgroundPositionY = offset * 0.75 + "px";
}

window.addEventListener("scroll", parallaxHandler);