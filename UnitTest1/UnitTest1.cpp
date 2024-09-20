#include "pch.h"
#include "CppUnitTest.h"
#include "MathLibrary.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestFunc1)
		{
			std::list<int> a{ 3 };
			std::list<int> b{ 0 };

			int exp = 3;
			int res = MathLibrary::Arithmetic::Func1(a, b);
			Assert::AreEqual(res, exp);
		}

		TEST_METHOD(TestFunc2)
		{
			std::list<int> a{ 1 };
			std::string exp = "1; 0";
			std::string res = MathLibrary::Arithmetic::Func2(a);
			Assert::AreEqual(res, exp);
		}

		TEST_METHOD(TestFunc3)
		{
			std::list<double> a { 3.14, 5.12 };
			std::string exp = "5.120000;3.140000;";
			std::string res = MathLibrary::Arithmetic::Func3(a);
			Assert::AreEqual(res, exp);
		}
	};
}
