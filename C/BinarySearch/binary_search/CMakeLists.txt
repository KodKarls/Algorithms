add_library(binary_search
            binary_search.c
            input.c
            surnames_data.c)

target_include_directories(binary_search PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})