cmake_minimum_required(VERSION 2.8)
project(Calendar)

add_definitions(-std=c++11)

set(SOURCE_FILES main.cpp)
add_executable(codemons_c_run ${SOURCE_FILES})

include_directories(src)

add_subdirectory(src)
add_subdirectory(test)

target_link_libraries(codemons_c_run src)
