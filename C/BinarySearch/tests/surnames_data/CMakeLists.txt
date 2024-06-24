include_directories(${UNITY_TEST_LIB_SOURCE})
include_directories(${BINARY_SEARCH_DIR})

add_executable(runSurnamesDataTests
               test_surnames_data.c)

target_link_libraries(runSurnamesDataTests binary_search unity)