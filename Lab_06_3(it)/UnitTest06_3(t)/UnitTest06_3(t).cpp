#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_3(it)/Lab_06_3(it).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest063t
{
	TEST_CLASS(UnitTest063t)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int p[6] = { 1, -2, 3, -4, 5, -6 };
			int t = Negative(p, 6);
			Assert::AreEqual(t, 3);
		}
	};
}
