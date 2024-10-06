#include <memory>
#include "application.hpp"
#include "configuration.hpp"

#include <lua.hpp>

int main() {
  auto config = std::make_unique<Configuration>();
  Application& app = Application::create(std::move(config));
  app.running();

  //lua_State* L = luaL_newstate();
  //luaL_openlibs(L);

  //lua_close(L);
  return 0;
}
