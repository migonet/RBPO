module BPZ1902.Visyagina.Lab3.Task1;
namespace RBPO {
	namespace Lab3{
		namespace Task1 {
			double f1(double x) {
				return (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
			}

			double f2(double x) {
				if (x > 0) return (log(x) + 9);
				else if ((x <= 0) & (x != -sqrt(7))) return (-(x / (pow(x, 2) - 7)));
				else if (x = -sqrt(7)) return (0);
			}

			double a(int i) {
				return pow(-1.0, i)*((pow(i, 2) + 1) / (pow(i, 3) + 3));
			}

			double f3(int n) {
				double acc = 0.0;
				for (int i = 0; i <= n; i++) {
					acc += a(i);
				}
				return acc;
			}

			double f4(double eps) {
				double prev = a(0);
				double curr = a(1);
				double acc = prev + curr;
				for (int i = 2; abs(prev - curr) > eps; i++) {
					prev = curr;
					curr = a(i);
					acc += curr;
				}
				return acc;
			}
		}
	}
}
