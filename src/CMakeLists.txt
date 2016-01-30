cmake_minimum_required(VERSION 2.8)

project(codebase_c)

add_definitions(-std=c++11)

set (SOURCES anagram/anagram.c)

add_executable (adder anagram/main.c ${SOURCES})

#set(HEADER_FILES
#    anagram/lib.h
#    )

set(SOURCE_FILES
        #anagram/main.c
        armstrong-number/program.c
        #gcd/main.c
        #leap-year/main.c
        #palindrome/main.c
    )

#add_executable(calendar_run ${SOURCE_FILES})

add_library(codebase_c STATIC ${SOURCE_FILES})
