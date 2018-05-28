#include <math.h>;

int findFirstElement(float eps) {
	float a0 = 1, a1 = 0, diff = fabs(a0 - a1);
	int i = 1;
	do {
		a1 = a0 + pow(-1, i)*((i + 1) / (pow(i, 3) + 1));
		diff = fabs(a0 - a1);
		a0 = a1;
		++i;
	} while (diff > eps);
	i--;
	return i;
}

int findFirstNegativeElement(float eps) {

	float a0 = 1, a1 = 0;
	int i = 1;
	while (i != 0) {
		a1 = a0 + pow(-1, i)*((i + 1) / (pow(i, 3) + 1));
		if (fabs(a1 - a0) < eps && a1 < 0) {
			return i;
			break;
		}
		else {
			i = 0;
			return i;
			break;
		}
		a0 = a1;
		i++;
	}
}

int findFirstNegativeElement(float eps) {

	float a0 = 1, a1 = 0;
	int i = 1;
	do {
		a1 = a0 + pow(-1, i)*((i + 1) / (pow(i, 3) + 1));
		if (fabs(a1 - a0) < eps && a1 < 0) {
			return i;
			break;
		}
		else {
			i = 0;
			return i;
			break;
		}
		a0 = a1;
		i++;
	} while (i != 0);
}
