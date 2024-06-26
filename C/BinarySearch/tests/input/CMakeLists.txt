include_directories(${UNITY_TEST_LIB_SOURCE})
include_directories(${BINARY_SEARCH_DIR})

add_executable(runInputTests
               test_input.c)

target_link_libraries(runInputTests binary_search unity)