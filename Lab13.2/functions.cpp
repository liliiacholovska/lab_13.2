#include <iostream>
#include <cstdarg>
#include <cmath>
#include "macros.h"
#include "functions.h"

#define N 5 

void calculateExpressions(int x, int z) {
    if (z > 5 && z < 10) {
        std::cout << "Expression: (max(x, z) * min(x + z, x * z))" << std::endl;
        std::cout << "Result: " << (MAX(x, z) * MIN(x + z, x * z)) << std::endl;
    }
    else if (z <= 5 || z >= 10) {
        std::cout << "Expression: (min^2(ABS(x - z), z))" << std::endl;
        std::cout << "Result: " << SQUARE(MIN(ABS(x - z), z)) << std::endl;
    }
}

void calculateSquare(int a, int b, int c) {
    std::cout << "Square of the first number: " << SQUARE(a) << std::endl;
    std::cout << "Square of the sum of the second number and constant N: " << SQUARE(b + N) << std::endl;
    std::cout << "Maximum between the first and second squares: " << MAX(SQUARE(a), SQUARE(b + N)) << std::endl;
}

void calculateCircleArea() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    double area = M_PI * SQUARE(radius);
    std::cout << "Area of the circle: " << area << std::endl;
}

bool askToRepeat() {
    char choice;
    std::cout << "Do you want to repeat the program? (y/n): ";
    std::cin >> choice;
    return (choice == 'y' || choice == 'Y');
}

float average(int first, ...) {
    int count = 0;
    int sum = 0, i = first;
    va_list marker;
    va_start(marker, first);

    while (i != -1) {
        sum += i;
        count++;
        i = va_arg(marker, int);
    }

    va_end(marker);
    return (count != 0) ? static_cast<float>(sum) / count : 0;
}