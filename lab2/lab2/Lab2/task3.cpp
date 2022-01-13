#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

double f(double);

int main() {
    double x;
    while (true) {
        cout << "Enter x: ";
        cin >> x;
        printf("f: %.4f\n", f(x));
    }
    return 0;
}

double f(double x) {
    return (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
}