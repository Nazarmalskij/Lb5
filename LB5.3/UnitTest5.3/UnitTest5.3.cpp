#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Project\Lb5\LB5.3\LB5.3\LB5.3.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double  c;
			//int f = 0;
			c = h(5);
			Assert::AreEqual(c, 0.031998859047202385);
		}
	};
}
