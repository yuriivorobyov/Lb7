#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Project\Lb7\LB7.1\LB7.1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71
{
	TEST_CLASS(UnitTest71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int S = 0;
			int k = 0;
			int** a = new int* [3, 12, 42, 31, 2, 1,5];
			c = Calc(a, 0, 5, S, k);
			Assert::AreEqual(c, 0);
		}
	};
}
