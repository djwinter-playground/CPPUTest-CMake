#include "CppUTest/TestHarness.h"
#include <CppUTest/CommandLineTestRunner.h>
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











int main(int ac, char** av)
{
   return CommandLineTestRunner::RunAllTests(ac, av);
}