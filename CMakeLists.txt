cmake_minimum_required(VERSION 3.3)

project (cutest C)

FILE (GLOB LIB_HDR *.h)
add_library (${PROJECT_NAME} test/lib/CuTest.c ${LIB_HDR} src/anagram/lib.h)

add_executable (CuTestTest test/AllTests.c test/Sample.c test/Sample2.c)
target_link_libraries (CuTestTest cutest)

enable_testing()
add_test (cutest CuTestTest)

IF (MSVC)
    find_package (MSVC MODULE)
    MSVC_CRT_SECURE_NO_WARNINGS (${PROJECT_NAME} CuTestTest)
ENDIF (MSVC)

set (CUTEST_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR} CACHE INTERNAL "CuTest headers")
set (CUTEST_LIBRARIES cutest CACHE INTERNAL "CuTest libraries")
