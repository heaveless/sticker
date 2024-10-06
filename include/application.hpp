#ifndef STICKER_APPLICATION_HPP
#define STICKER_APPLICATION_HPP

#include <memory>
#include <X11/Xlib.h>
#include <X11/extensions/shape.h>

#include "configuration.hpp"

class Application {
  private:
    Display* _display;
    Window _window;
    XEvent _event;
    int _screen;

    int _screenWidth;

    Application();

    Application(const Application&) = delete;
    Application& operator=(const Application&) = delete;

  public:
    static Application& create(std::unique_ptr<Configuration>);

    void running();
};

#endif
