#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 8(it)/Laba 8(it).cpp"
#pragma warning(disable : 4996)

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char str[101]{};
			Count(str);
			char* dest = new char[151];
			Change(str);
		}
	};
}
