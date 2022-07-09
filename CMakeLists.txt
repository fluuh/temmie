cmake_minimum_required(VERSION 3.10)

project(viper)

add_compile_options(-Wall -Wmissing-prototypes -Wstrict-prototypes -Wshadow=local)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

add_library(temmie)

target_sources(temmie PRIVATE
  src/temmie.c)
