// Smooth scroll for navigation
document.querySelectorAll('nav ul li a').forEach(anchor => {
    anchor.addEventListener('click', function(e) {
      e.preventDefault();
      document.querySelector(this.getAttribute('href')).scrollIntoView({
        behavior: 'smooth'
      });
    });
  });
  
  // Toggle mobile navigation menu
  const menuIcon = document.getElementById('menu-icon');
  const nav = document.querySelector('nav');
  
  menuIcon.addEventListener('click', () => {
    nav.classList.toggle('active');
  });
  