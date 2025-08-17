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

check_include_files("iostream" HAVE_IOSTREAM)
check_include_files("random" HAVE_RANDOM)
check_include_files("string" HAVE_STRING)

check_include_files("cxxopts/cxxopts.hpp" HAVE_CXXOPTS_HPP)
check_include_files("getpasswd.hpp" HAVE_GETPASSWD_HPP)
check_include_files("random.hpp" HAVE_RANDOM_HPP)

include_directories(${CMAKE_SOURCE_DIR}/include)

install(TARGETS ${CMAKE_PROJECT_NAME} DESTINATION bin)
