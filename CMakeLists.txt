cmake_minimum_required(VERSION 3.7)
project(IncludeTest)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cc)
add_executable(IncludeTest ${SOURCE_FILES})

add_subdirectory(lib/mainlib)
set(MAINLIB_PATH ../mainlib)
add_subdirectory(lib/module)

INCLUDE_DIRECTORIES(${mainlib_INCLUDE_DIRS} ${mainlibhello1_INCLUDE_DIRS})
TARGET_LINK_LIBRARIES(${PROJECT_NAME} mainlib mainlibhello1)