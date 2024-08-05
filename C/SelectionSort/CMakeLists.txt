cmake_minimum_required(VERSION 3.28)
project(SelectionSort C)

set(CMAKE_C_STANDARD 11)

set(ROOT_DIR ${CMAKE_SOURCE_DIR})
set(SELECTION_SORT_DIR selection_sort)
set(TEST_LIBS_DIR tests/libs)
set(UNITY_TEST_LIB_DIR ${TEST_LIBS_DIR}/Unity)

add_subdirectory(${SELECTION_SORT_DIR})
add_subdirectory(tests)

set(SOURCE_FILES main.c)
add_executable(SelectionSort ${SOURCE_FILES})

include_directories(${SELECTION_SORT_DIR})

target_link_libraries(SelectionSort selection_sort)