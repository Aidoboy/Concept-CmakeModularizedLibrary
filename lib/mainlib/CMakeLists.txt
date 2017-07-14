cmake_minimum_required(VERSION 3.7)
project(mainlib)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES mainlib/library.hh mainlib/hellomodule.hh)
add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})
set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories (${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})