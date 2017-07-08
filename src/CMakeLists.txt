cmake_minimum_required(VERSION 2.8.7)

project(src)

#add_definitions(-std=c++11)

set(ANAGRAM_FILES anagram/main.c anagram/anagram.c)
add_executable(anagram ${ANAGRAM_FILES})

set(ARMSTRONG_FILES armstrong-number/main.c armstrong-number/armstrong-number.c)
add_executable(armstrong-number ${ARMSTRONG_FILES})

set(GCD_FILES gcd/main.c gcd/gcd.c)
add_executable(gcd ${GCD_FILES})

set(LEAP_YEAR_FILES leap-year/main.c leap-year/leap-year.c)
add_executable(leap-year ${LEAP_YEAR_FILES})

set(BINARY_SEARCH_FILES searching-algorithms/binary-search/main.c searching-algorithms/binary-search/binary-search.c)
add_executable(binary-search ${BINARY_SEARCH_FILES})

set(RIGHT_ANGLED_TRIANGLE_RIGHT display-patterns/right-angled-triangle-right.c)
add_executable(right-angled-triangle-right ${RIGHT_ANGLED_TRIANGLE_RIGHT})

set(RIGHT_ANGLED_TRIANGLE_LEFT display-patterns/right-angled-triangle-left.c)
add_executable(right-angled-triangle-left ${RIGHT_ANGLED_TRIANGLE_LEFT})

set(RANDOM_NUMBER random-number/main.c random-number/random-number.c)
add_executable(random-number ${RANDOM_NUMBER})

set(SOURCE_FILES
        ${ANAGRAM_FILES}
        ${ARMSTRONG_FILES}
        ${GCD_FILES}
        ${LEAP_YEAR_FILES}
        ${BINARY_SEARCH_FILES}
        )

add_library(src STATIC ${SOURCE_FILES})

