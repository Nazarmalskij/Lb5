#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Project\Lb5\LB5.2\LB5.2\LB5.2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double  c;
			int f = 0;
			c = A(3, f, 1);
			Assert::AreEqual(c, 0.);
		}
	};
}
