#include "pch.h"
#include "CppUnitTest.h"
#include "../lab05.2_1/lab_05.2_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest521
{
	TEST_CLASS(UnitTest521)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 1;
			A(1, 1, x);
			Assert::AreEqual(x, 0.);
		}
	};
}
