import React from "react"

const Header = ()=>{
    return (
    
    <header className="site-navbar py-4" role="banner">
      <div className="container">
        <div className="row align-items-center">
          <div className="col-3">
            <h1 className="site-logo"><a href="index.html" className="h2">Podcast<span className="text-primary">.</span> </a></h1>
          </div>
          <div className="col-9">
            <nav className="site-navigation position-relative text-right text-md-right" role="navigation">
              <div className="d-block d-lg-none ml-md-0 mr-auto">
                <a href="#" className="site-menu-toggle js-menu-toggle text-black">
                  <span className="icon-menu h3"></span>
                </a>
              </div>

              <ul className="site-menu js-clone-nav d-none d-lg-block">
                <li className="active">
                  <a href="index.html">Home</a>
                </li>
                <li><a href="about.html">About</a></li>
                <li><a href="contact.html">Contact</a></li>
                <li><a href="login-register.html">Login / Register</a></li>
              </ul>
            </nav>
          </div>
        </div>
      </div>
    </header>  
    )
}

export default Header;