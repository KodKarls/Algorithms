include_directories(${UNITY_TEST_LIB_SOURCE})
include_directories(${BINARY_SEARCH_DIR})

add_executable(runBinarySearchTests
               binary_search_test.c)

target_link_libraries(runBinarySearchTests binary_search unity)