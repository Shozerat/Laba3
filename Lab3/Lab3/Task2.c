#include <math.h>

double summ2(float eps) {
	float a0 = 1, a1;
	int i = 1;
	for (;;) {
		a1 = a0 + pow(-1, i)*((i + 1) / (pow(i, 3) + 1));
		if (fabs(a1 - a0) <= eps)
			break;
		a0 = a1;
		i++;
	}
	return a1;
}

double summ2(float eps) {
	float a0 = 1, a1 = 0, diff = fabs(a0 - a1);
	int i = 1;
	while (diff > eps) {
		a1 = a0 + pow(-1, i)*((i + 1) / (pow(i, 3) + 1));
		diff = fabs(a0 - a1);
		a0 = a1;
		i++;
	}
	return a1;
}

double summ2(float eps) {
	float a0 = 1, a1 = 0, diff = fabs(a0 - a1);
	int i = 1;
	do {
		a1 = a0 + pow(-1, i)*((i + 1) / (pow(i, 3) + 1));
		diff = fabs(a0 - a1);
		a0 = a1;
		i++;
	} while (diff > eps);
	return a1;
}
