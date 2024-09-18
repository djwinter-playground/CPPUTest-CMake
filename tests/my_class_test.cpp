#include "CppUTest/TestHarness.h"
#include "my_class.h"

TEST_GROUP(MyClassTests) {
    MyClass myClass;
};

TEST(MyClassTests, Add) {
    CHECK_EQUAL(5, myClass.add(2, 3));
}