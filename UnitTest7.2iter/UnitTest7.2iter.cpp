#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest72iter
{
	TEST_CLASS(UnitTest72iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int z;
			int** a = new int* [1,2];
			const int k=4;
			const int n=5;
			z = MaxMin(a, k, n);
			Assert::AreEqual(z, 14);
		}
	};
}
