project(my_project_tests)

find_package(CppUTest REQUIRED)
add_executable(my_class_test my_class_test.cpp)
target_link_libraries(my_class_test CppUTest::CppUTest)
