let navToggle = document.querySelector('nav .navbar-toggler input');

navToggle.addEventListener('click', function () {
    document.querySelector('nav .navbar-collapse').classList.toggle('active');
});