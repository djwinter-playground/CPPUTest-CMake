# Find CppUTest
#find_package(CppUTest REQUIRED)
# Specify the path to CppUTest manually
set(CPPUTEST_HOME /usr/local/cpputest)

# Include the CppUTest headers
include_directories(${CPPUTEST_HOME}/include)

# Link the CppUTest library
link_directories(${CPPUTEST_HOME}/lib)

# Add the test executable
add_executable(my_class_test my_class_test.cpp)

target_link_libraries(my_class_test CppUTest my_class)
#target_link_libraries(my_class_test ${CppUTest_LIBRARY})
