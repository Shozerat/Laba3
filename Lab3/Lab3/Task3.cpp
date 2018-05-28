#include <math.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void print(int n, int k) {
	float a = 1;
	printf("%i  ", 0);
	printf("%f \n", a);
	for (int i = 1; i < n; i++) {
		a = a + pow(-1, i)*((i + 1) / (pow(i, 3) + 1));
		if (i%k == 0)
			continue;
		printf("%i  ", i);
		printf("%f \n", a);
	}
}

void print(int n, int k) {
	float a = 1;
	printf("%i  ", 0);
	printf("%f \n", a);
	int i = 1;
	while (i < n) {
		a = a + pow(-1, i)*((i + 1) / (pow(i, 3) + 1));

		if (i % k == 0) {
			i++;
			continue;
		}
		printf("%i  ", i);
		printf("%f \n", a);
		i++;
	}
}

void print(int n, int k) {
	float a = 1;
	printf("%i  ", 0);
	printf("%f \n", a);
	int i = 1;
	do {
		a = a + pow(-1, i)*((i + 1) / (pow(i, 3) + 1));

		if (i % k == 0) {
			i++;
			continue;
		}
		printf("%i  ", i);
		printf("%f \n", a);
		i++;
	} while (i < 20);
}
