#define _USE_MATH_DEFINES
#include "func.h"

double x, result;

void f() {
	result = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
}