#include "visyagina.h"

namespace visyagina {
	double x, result;

	void f() {
		result = (cos(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
	}
}