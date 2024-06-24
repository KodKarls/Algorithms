cmake_minimum_required(VERSION 3.28)
project(BinarySearch C)

set(CMAKE_C_STANDARD 11)

set(ROOT_DIR ${CMAKE_SOURCE_DIR})
set(BINARY_SEARCH_DIR binary_search)
set(TEST_LIBS_DIR tests/libs)
set(UNITY_TEST_LIB_DIR ${TEST_LIBS_DIR}/Unity)

add_subdirectory(${BINARY_SEARCH_DIR})
add_subdirectory(tests)

set(SOURCE_FILES main.c)
add_executable(BinarySearch ${SOURCE_FILES})

include_directories(${BINARY_SEARCH_DIR})

target_link_libraries(BinarySearch binary_search)