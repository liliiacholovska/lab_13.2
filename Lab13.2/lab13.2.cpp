#include <iostream>
#include "macros.h"
#include "functions.h"

#define N 5

int main() {
    std::cout << "Function with a variable number of arguments" << std::endl;

#ifndef SKIP_AVERAGE_CALC
    std::cout << "Average (2, 3, 4, -1) is: " << average(2, 3, 4, -1) << std::endl;
    std::cout << "Average (5, 7, 9, 12, -1) is: " << average(5, 7, 9, 12, -1) << std::endl;
    std::cout << "Average (-1) is: " << average(-1) << std::endl;
#endif

    do {
#if N < 10
        int a, b, c;
        std::cout << "Enter three integers: ";
        std::cin >> a >> b >> c;
        calculateSquare(a, b, c);
#elif N > 10
        calculateCircleArea();
#endif

        int x, z;
        std::cout << "Enter two integers x and z: ";
        std::cin >> x >> z;
        calculateExpressions(x, z);
    } while (askToRepeat());

    return 0;
}