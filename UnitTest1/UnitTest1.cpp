#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.8/Goods.h"
#include "../lab1.8/Goods.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Goods item;
			item.initNum(2024, 3, 1);
			item.initStr("2000.12.31");
			int test = item.getDateOform().getYear();
			Assert::AreEqual(2024, test);
			test = item.getDateNad().getDay();
			Assert::AreEqual(31, test);
		}
	};
}
