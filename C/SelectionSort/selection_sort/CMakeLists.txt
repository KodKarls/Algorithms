add_library(selection_sort
            numbers_data.c
            selection_sort.c)

target_include_directories(selection_sort PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})