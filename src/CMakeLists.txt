
# Add the source files to the library
add_library(my_class my_class.cpp)

# Include the headers for the library
target_include_directories(my_class PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})