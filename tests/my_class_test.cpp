#include "CppUTest/TestHarness.h"
#include "my_class.h"

TEST_GROUP(MyGroup) {
    MyClass* myClass;

    void setup() {
        // Setup code here
        myClass = new MyClass();
    }

    void teardown() {
        // Teardown code here
        delete myClass;
    }
};

TEST(MyGroup, Add) {
    CHECK_EQUAL(5, myClass->add(2, 3));
}