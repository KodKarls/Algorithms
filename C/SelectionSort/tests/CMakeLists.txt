project(SelectionSortTests)

set(UNITY_TEST_LIB_SOURCE ${UNITY_TEST_LIB_DIR}/src)
set(SELECTION_SORT_TESTS_DIR selection_sort_tests)

add_subdirectory(libs/Unity)

add_executable(SelectionSortTests main.c
               ${SELECTION_SORT_TESTS_DIR}/selection_sort_test.c
               ${SELECTION_SORT_TESTS_DIR}/numbers_data_test.c)

target_link_libraries(SelectionSortTests selection_sort unity)

include_directories(${UNITY_TEST_LIB_SOURCE})
include_directories(${SELECTION_SORT_DIR})