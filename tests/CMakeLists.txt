# Find CppUTest
#find_package(CppUTest REQUIRED)
# Specify the path to CppUTest manually
#set(CPPUTEST_HOME /usr/local/cpputest)

# Include the CppUTest headers
#include_directories(${CPPUTEST_HOME}/include)

# Link the CppUTest library
#link_directories(${CPPUTEST_HOME}/lib)
include(FetchContent)

# Download and install CppUTest if it's not already installed
FetchContent_Declare(
    CppUTest
    GIT_REPOSITORY https://github.com/cpputest/cpputest.git
    GIT_TAG        master # or use a specific version like 'v4.0'
)

FetchContent_MakeAvailable(CppUTest)

# Add the test executable
add_executable(my_class_test my_class_test.cpp)

target_link_libraries(my_class_test CppUTest my_class)
#target_link_libraries(my_class_test ${CppUTest_LIBRARY})
