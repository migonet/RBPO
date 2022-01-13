#include <iostream>
#include <cmath>

using namespace std;

double x;
double result;

void f();

int main() {
	while (true) {
		cout << "Enter x: ";
		cin >> x;
		f();
		printf("f: %.4f\n", result);
	}
	return 0;
}

void f() {
	result = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
}