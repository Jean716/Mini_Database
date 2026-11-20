cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(mini_database LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif()

include(GNUInstallDirs)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})

option(ENABLE_COVERAGE "Build with gcov coverage instrumentation" OFF)
if(ENABLE_COVERAGE AND CMAKE_CXX_COMPILER_ID MATCHES GNU)
    add_compile_options(-fprofile-arcs -ftest-coverage)
    add_link_options(-fprofile-arcs -ftest-coverage)
endif()

# ---------------------------------------------------------------------------
# GoogleTest
# ---------------------------------------------------------------------------
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
include(GoogleTest)

# ---------------------------------------------------------------------------
# Core library: every .cpp under includes/
# ---------------------------------------------------------------------------
file(GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/includes/*.cpp")
add_library(minidb STATIC ${SOURCE_FILES})
target_include_directories(minidb PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/includes)

# Interactive SQL shell
add_executable(main main.cpp)
target_link_libraries(main PRIVATE minidb)

# B+ tree walkthrough (prints tree shapes; not a test)
add_executable(bplustree_demo examples/bplustree_demo.cpp)
target_link_libraries(bplustree_demo PRIVATE minidb)

# ---------------------------------------------------------------------------
# Tests (tables are written to the working directory, so run them in a
# dedicated folder inside build/)
# ---------------------------------------------------------------------------
set(TEST_WORKDIR ${CMAKE_BINARY_DIR}/test_data)
file(MAKE_DIRECTORY ${TEST_WORKDIR})

add_executable(basic_test _tests/_test_files/basic_test.cpp)
target_link_libraries(basic_test PRIVATE minidb gtest)
gtest_discover_tests(basic_test WORKING_DIRECTORY ${TEST_WORKDIR})

add_executable(bplustree_test _tests/_test_files/bplustree_test.cpp)
target_link_libraries(bplustree_test PRIVATE minidb gtest_main)
gtest_discover_tests(bplustree_test WORKING_DIRECTORY ${TEST_WORKDIR})
