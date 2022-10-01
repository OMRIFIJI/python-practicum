cmake_minimum_required(VERSION 3.2)

project(project1)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

set(SOURCE_EXE main.cpp)

add_executable(main ${SOURCE_EXE})

target_link_libraries( main  ${OpenCV_LIBS} )

target_compile_options(main PRIVATE -Wall -Wextra -Wpedantic -Werror)
