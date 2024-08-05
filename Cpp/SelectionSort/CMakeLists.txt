cmake_minimum_required(VERSION 3.28)
project(SelectionSort)

set(CMAKE_CXX_STANDARD 17)

set(ROOT_DIR ${CMAKE_SOURCE_DIR})
set(SELECTION_SORT_DIR selection_sort)
set(TESTS_DIR ${ROOT_DIR}/tests)
set(TEST_LIBS_DIR ${TESTS_DIR}/libs)

set(SOURCE_FILES main.cpp)
add_executable(SelectionSort ${SOURCE_FILES})

include_directories(${SELECTION_SORT_DIR})

add_subdirectory(${SELECTION_SORT_DIR})
add_subdirectory(${TESTS_DIR})

target_link_libraries(SelectionSort ${SELECTION_SORT_DIR})