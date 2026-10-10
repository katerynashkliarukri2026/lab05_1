
#include "pch.h"
#include "CppUnitTest.h"
#include "../lab05_1/functions.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5_1
{
    TEST_CLASS(UnitTest5_1)
    {
    public:

        TEST_METHOD(TestPZero)
        {
            Assert::AreEqual(1.0, p(0.0), 1e-9);
        }

        TEST_METHOD(TestPOne)
        {
            Assert::AreEqual(1.25, p(1.0), 1e-9);
        }

        TEST_METHOD(TestCalculateCZero)
        {
            Assert::AreEqual(0.0, calculateC(0.0), 1e-9);
        }
    };
}
