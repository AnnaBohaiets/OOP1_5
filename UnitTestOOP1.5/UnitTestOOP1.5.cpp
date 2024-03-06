#include "pch.h"
#include "CppUnitTest.h"
#include "../OOPLab_1_5/Alcohol.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestOOP15
{
	TEST_CLASS(UnitTestOOP15)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Alcohol a;
			a.setAlco(44.5);
			Assert::AreEqual(44.5, static_cast<double>(a.getAlco()));

		}
	};
}
