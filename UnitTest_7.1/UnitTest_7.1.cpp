#include "pch.h"
#include "CppUnitTest.h"
#include "D:\ООП\Лабораторні 7\Laboratory_7.1\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71
{
	TEST_CLASS(UnitTest71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			array<int, 100> arr = { 69, 1337, 97};
			Assert::AreEqual(Arithmetic_mean(arr, 3.), 501.);
		}
	};
}
