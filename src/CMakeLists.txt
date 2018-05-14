cmake_minimum_required(VERSION 2.8.7)

project(src)

#add_definitions(-std=c++11)

set(ANAGRAM_FILES anagram/main.c anagram/anagram.c)

set(SOURCE_FILES
        ${ANAGRAM_FILES}
        )

add_library(src STATIC ${SOURCE_FILES})

