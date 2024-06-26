cmake_minimum_required(VERSION 3.28)
project(BinarySearch)

set(CMAKE_CXX_STANDARD 17)

set(ROOT_DIR ${CMAKE_SOURCE_DIR})
set(BINARY_SEARCH_DIR binary_search)
set(TESTS_DIR ${ROOT_DIR}/tests)
set(TEST_LIBS_DIR ${TESTS_DIR}/libs)

set(SOURCE_FILES main.cpp)
add_executable(BinarySearch ${SOURCE_FILES})

include_directories(${BINARY_SEARCH_DIR})

add_subdirectory(${BINARY_SEARCH_DIR})
add_subdirectory(${TESTS_DIR})

target_link_libraries(BinarySearch ${BINARY_SEARCH_DIR})