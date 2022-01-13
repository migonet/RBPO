#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

void f(const double&, double&);

int main() {
    double x;
    double result;
    while (true) {
        cout << "Enter x: ";
        cin >> x;
        f(x, result);
        printf("f: %.4f\n", result);
    }
    return 0;
}


void f(const double& x, double& result) {
    result = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
}
