#define _USE_MATH_DEFINES
#include "visyagina.h"

using namespace std;

int main() {
    while (true) {
        cout << "Enter x: ";
        cin >> visyagina::x;
        visyagina::f();
        printf("f: %.4f\n", visyagina::result);
    }
    return 0;
}