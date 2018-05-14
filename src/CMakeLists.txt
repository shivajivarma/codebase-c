cmake_minimum_required(VERSION 2.8.7)

project(src)

#add_definitions(-std=c++11)

FILE (GLOB SOURCE_FILES_LIST ./*.c)

#set(ANAGRAM_FILES anagram/main.c anagram/anagram.c)


#set(SOURCE_FILES ${SOURCE_FILES_LIST})

add_library(src STATIC anagram/main.c anagram/anagram.c)

