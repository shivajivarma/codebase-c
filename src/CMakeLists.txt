cmake_minimum_required(VERSION 2.8.7)

project(src)

FILE (GLOB_RECURSE SOURCE_FILES_LIST *.c)

add_library(src STATIC ${SOURCE_FILES_LIST})
