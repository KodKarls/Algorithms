include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runSelectionSortTests
               main.cpp
               test_output.cpp
               test_selection_sort.cpp)

target_link_libraries(runSelectionSortTests gtest gtest_main)
target_link_libraries(runSelectionSortTests selection_sort)