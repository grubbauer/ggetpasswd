cmake_minimum_required(VERSION 3.10)

project(ggetpasswd
  VERSION 1.0.0
  DESCRIPTION "Simple yet fast password generator."
  LANGUAGES CXX)

add_executable(${CMAKE_PROJECT_NAME}
  src/main.cpp
  src/random.cpp
  src/getpasswd.cpp
)

include(CheckIncludeFiles)
include(CheckFunctionExists)

set(CMAKE_REQUIRED_INCLUDES ${CMAKE_SOURCE_DIR}/include)

check_include_files("getpasswd.hpp" HAVE_CXX_OPTS)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_custom_command(TARGET ${CMAKE_PROJECT_NAME} POST_BUILD
  COMMAND strip ${CMAKE_PROJECT_NAME}
  VERBATIM)

install(TARGETS ${CMAKE_PROJECT_NAME} DESTINATION bin)
