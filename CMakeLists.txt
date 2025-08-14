cmake_minimum_required(VERSION 3.10)

project(ggetpasswd
  VERSION 0.1
  DESCRIPTION "Simple but fast password generator"
  LANGUAGES CXX)

include_directories(include)

add_executable(ggetpasswd
  src/main.cpp
  src/random.cpp
)
