cmake_minimum_required(VERSION 2.8.7)

project (cutest C)

FILE (GLOB LIB_HDR *.h)
add_library (${PROJECT_NAME} lib/CuTest.c ${LIB_HDR})

FILE (GLOB_RECURSE TEST_FILES test/*.c)
add_executable (CuTestTest AllTests.c ${TEST_FILES})

include_directories(src)
add_subdirectory(src)
target_link_libraries (CuTestTest cutest)
target_link_libraries (CuTestTest src)

enable_testing()
add_test (cutest CuTestTest)

IF (MSVC)
    find_package (MSVC MODULE)
    MSVC_CRT_SECURE_NO_WARNINGS (${PROJECT_NAME} CuTestTest)
ENDIF (MSVC)

set (CUTEST_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR} CACHE INTERNAL "CuTest headers")
set (CUTEST_LIBRARIES cutest CACHE INTERNAL "CuTest libraries")
