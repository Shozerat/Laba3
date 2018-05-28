#include <math.h>

double summ(int n) {
	double a = 1;
	for (int i = 1; i <= n; i++) {
		a = a + pow(-1, i)*((i + 1) / (pow(i, 3) + 1));
	}
	return a;
}

double summ(int n) {
	double a = 1;
	int i = 1;
	while (i <= n) {
		a = a + pow(-1, i)*((i + 1) / (pow(i, 3) + 1));
		i++;
	}
	return a;
}

double summ(int n) {
	double a = 1;
	int i = 1;
	do {
		a = a + pow(-1, i)*((i + 1) / (pow(i, 3) + 1));
		i++;
	} while (i <= n);
	return a;
}
