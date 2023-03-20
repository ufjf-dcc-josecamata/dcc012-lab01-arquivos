cmake_minimum_required(VERSION 3.14)
project(dcc012-lab1-arquivos)

option(CLASSROOM "Enable classroom build" OFF)

set(INPUT_DATA_DIR "${CMAKE_CURRENT_SOURCE_DIR}/tests/data/")
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/src/config.h) 

include_directories(src)
add_subdirectory(src)
add_subdirectory(tests)

