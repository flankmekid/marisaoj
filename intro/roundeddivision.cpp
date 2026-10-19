#include <cstdio>

int main() {
	double a, b;
	if (scanf("%lf %lf", &a, &b) == 2) {
		double res = a / b;
		printf("%.2f\n", res);
	}
	return 0;
}
