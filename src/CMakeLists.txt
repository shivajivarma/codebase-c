cmake_minimum_required(VERSION 2.8.7)

project(src)

#add_definitions(-std=c++11)

set(ANAGRAM_FILES anagram/main.c anagram/anagram.c)
set(ARMSTRONG_FILES armstrong-number/main.c armstrong-number/armstrong-number.c)
set(GCD_FILES gcd/main.c gcd/gcd.c)
set(LEAP_YEAR_FILES leap-year/main.c leap-year/leap-year.c)
set(BINARY_SEARCH_FILES searching-algorithms/binary-search/main.c searching-algorithms/binary-search/binary-search.c)
set(RIGHT_ANGLED_TRIANGLE_RIGHT display-patterns/right-angled-triangle-right.c)
set(RIGHT_ANGLED_TRIANGLE_LEFT display-patterns/right-angled-triangle-left.c)
set(RANDOM_NUMBER random-number/main.c random-number/random-number.c)

set(SOURCE_FILES
        ${ANAGRAM_FILES}
        ${ARMSTRONG_FILES}
        ${GCD_FILES}
        ${LEAP_YEAR_FILES}
        ${BINARY_SEARCH_FILES}
        )

add_library(src STATIC ${SOURCE_FILES})

