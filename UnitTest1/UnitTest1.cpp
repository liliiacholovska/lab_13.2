#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include <sstream>
#include <cstdarg>
#include <cmath>
#include "../Lab13.2/functions.h"
#include "../Lab13.2/macros.h"
#include "../Lab13.2/lab13.2.cpp"
#include "../lab13.2/functions.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    std::string Trim(const std::string& str) {
        size_t first = str.find_first_not_of(' ');
        if (first == std::string::npos)
            return "";

        size_t last = str.find_last_not_of(' ');
        return str.substr(first, (last - first + 1));
    }

    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestCalculateSquare)
        {
#if N < 10
            std::istringstream input("3 4 5\n");
            std::cin.rdbuf(input.rdbuf());
            std::ostringstream output;
            std::streambuf* oldCout = std::cout.rdbuf(output.rdbuf());

            int a = 3, b = 4, c = 5;
            calculateSquare(a, b, c);

            std::cout.rdbuf(oldCout);
            std::cin.rdbuf(nullptr);

            std::string expectedOutput = "Square of the first number: 9\nSquare of the sum of the second number and constant N: 81\nMaximum between the first and second squares: 81\n";
            Assert::IsTrue(Trim(expectedOutput) == Trim(output.str()), L"CalculateSquare output mismatch");
#endif
        }

        TEST_METHOD(TestCalculateExpressions)
        {
            std::istringstream input("3 4\n");
            std::cin.rdbuf(input.rdbuf());
            std::ostringstream output;
            std::streambuf* oldCout = std::cout.rdbuf(output.rdbuf());

            int x = 3, z = 4;
            calculateExpressions(x, z);

            std::cout.rdbuf(oldCout);
            std::cin.rdbuf(nullptr);

            std::string expectedOutput = "Expression: (min^2(ABS(x - z), z))\nResult: 1\n"; 
            Assert::IsTrue(Trim(expectedOutput) == Trim(output.str()), L"CalculateExpressions output mismatch");
        }
    };
}