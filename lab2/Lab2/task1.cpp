#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    double result;
    while (true) {
        cout << "Enter x: ";
        cin >> x;
        result = (cos(2*x)+sin(5*x)-sin(3*x))/(cos(x)-cos(3*x)+cos(5*x));
        printf("result: %.4f\n", result);
    }
    return 0;
}