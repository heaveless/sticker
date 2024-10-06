#include "application.hpp"
#include <iostream>

Application::Application() { }

Application& Application::create(std::unique_ptr<Configuration> config) {
  static Application instance;
  return instance;
}

void Application::configure() {
  _display = XOpenDisplay(NULL);
  _screen = DefaultScreen(_display);
  
  _screenWidth = DisplayWidth(_display, _screen);
  _screenHeight = DisplayHeight(_display, _screen);

  XSetWindowAttributes attributes;
  attributes.override_redirect = True;
  attributes.background_pixmap = None;


  // _window = 
}

void Application::draw() {

  XDrawString(_display, _window, );
}

void Application::loop() {
  XMapWindow(_display, _window);

  while() {
    XClearWindow(_display, _window);
    
    draw();

    XFlush(_display);
  }
}

void Application::dispose() {
  XCloseDisplay(_display); 
}

void Application::running() {

  configure();  
  loop();
  dispose();
}
