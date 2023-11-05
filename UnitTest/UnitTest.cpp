#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_5.3/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 2.0;
			double expected = (cos(x) + 1) / exp(x) + pow(sin(x), 2);

			double actual = t(x);

			Assert::AreEqual(expected, actual, 0.001);
		}
	};
}
