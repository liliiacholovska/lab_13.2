#ifndef MACROS_H
#define MACROS_H

#include <cmath>

#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define SQUARE(x) ((x) * (x))
#define SQRT(x) (std::sqrt(x))

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#endif