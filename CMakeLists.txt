cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

project(RamDB)

add_executable(
  db
  src/main.cpp
  src/reval/reval.h
  src/reval/reval.cpp
  src/command/command.cpp
  src/command/command.h
)