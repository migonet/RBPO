module BPZ1902.Visyagina.Lab3.Task4:f2;
namespace RBPO {
	namespace Lab3 {
		namespace Task4 {
			double f2(double x) {
				if (x > 0) return (log(x) + 9);
				else if ((x <= 0) & (x != -sqrt(7))) return (-(x / (pow(x, 2) - 7)));
				else if (x = -sqrt(7)) return (0);

			}
		}
	}
}