cmake_minimum_required(VERSION 3.28)

project(sticker)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_COMPILER clang++)

find_package(Lua REQUIRED)
find_package(X11 REQUIRED)

find_library(XEXT_LIB Xext REQUIRED)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(${PROJECT_NAME}
  src/application.cpp
  src/sticker.cpp
)

target_link_libraries(${PROJECT_NAME}
  ${LUA_LIBRARIES}
  ${X11_LIBRARIES}
  ${XEXT_LIB}
)
