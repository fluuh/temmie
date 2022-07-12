cmake_minimum_required(VERSION 3.10)

project(temmie)

add_compile_options(-Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow=local)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

include_directories(.)

add_library(temmie)

target_sources(temmie PRIVATE
  tm/code.c
  tm/temmie.c
  tm/types.c)

add_executable(tests)

target_sources(tests PRIVATE
  tests/main.c)

target_link_libraries(tests PRIVATE temmie)
