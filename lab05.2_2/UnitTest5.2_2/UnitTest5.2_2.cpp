#include "pch.h"
#include "CppUnitTest.h"
#include "../lab05.2_2/lab_05.2_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest522
{
	TEST_CLASS(UnitTest522)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 1;
			A(1, 1, x);
				Assert::AreEqual(x, 1.);
		}
	};
}
