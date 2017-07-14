cmake_minimum_required(VERSION 3.7)
project(mainlibhello1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES mainlib/implementhellomodule.hh)
add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})
set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories (${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

INCLUDE_DIRECTORIES(${mainlib_INCLUDE_DIRS})
TARGET_LINK_LIBRARIES(${PROJECT_NAME} mainlib)