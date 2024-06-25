include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runBinarySearchTests
               main.cpp
               test_binary_search.cpp
               test_input.cpp
               test_numbers_data.cpp)

target_link_libraries(runBinarySearchTests gtest gtest_main)
target_link_libraries(runBinarySearchTests binary_search)