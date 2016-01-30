cmake_minimum_required(VERSION 2.8.7)

project(src)

#add_definitions(-std=c++11)

set(ANAGRAM_FILES
        anagram/main.c anagram/anagram.c)
add_executable(anagram ${ANAGRAM_FILES})

set(ARMSTRONG_FILES
        armstrong-number/main.c armstrong-number/armstrong-number.c)
add_executable(armstrong-number ${ARMSTRONG_FILES})
#add_executable (gcd gcd/main.c gcd/gcd.c)
#add_executable (leap-year leap-year/main.c leap-year/leap-year.c)

set(SOURCE_FILES
        ${ANAGRAM_FILES}
        ${ARMSTRONG_FILES}
        #gcd/gcd.c
        #leap-year/leap-year.c
        #palindrome/palindrome.c
        )

add_library(src STATIC ${SOURCE_FILES})

