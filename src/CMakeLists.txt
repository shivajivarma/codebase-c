cmake_minimum_required(VERSION 2.8)

project(codebase_c)

add_definitions(-std=c++11)

#set(HEADER_FILES
#    calendar_defs.h
#    General.h
#    GregorianCalendar.h
#    JulianCalendar.h
#    IslamicCalendar.h
#    HebrewCalendar.h
#    )

set(SOURCE_FILES
    anagram/anagram.c
    )

add_library(codebase_c STATIC ${SOURCE_FILES})
