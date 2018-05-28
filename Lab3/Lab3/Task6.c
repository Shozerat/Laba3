#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float eps;
	int n, k;
	double a;

	for (int i = 0; i != -1;) {
		system("cls");
		printf("task 1 \n");
		printf("task 2 \n");
		printf("task 3 \n");
		printf("task 4 \n");
		printf("task 5 \n");
		printf("6 to Exit \n \n");
		printf("Choose Your Destiny");

		switch (getchar()) {
		case '1':
			system("cls");
			printf("task 1 \n");
			printf("n = ");
			scanf("%i", &n);
			a = summ(n);
			printf("%f", a);
			_getch();
			break;
		case '2':
			system("cls");
			printf("task 2 \n");
			printf("eps = ");
			scanf("%f", &eps);
			a = summ2(eps);
			printf("%f", a);
			_getch();
			break;
		case '3':
			system("cls");
			printf("task 3 \n");
			printf("n = ");
			scanf("%i", &n);
			printf("k = ");
			scanf("%i", &k);
			print(n, k);
			_getch();
			break;
		case '4':
			system("cls");
			printf("task 4 \n");
			printf("eps = ");
			scanf("%f", &eps);
			n = findFirstElement(eps);
			printf("%i \n", n);
			_getch();
			break;
		case '5':
			system("cls");
			printf("task 5 \n");
			printf("eps = ");
			scanf("%f", &eps);
			n = findFirstNegativeElement(eps);
			if (n != 0) {
				printf("%i \n", n);
			}
			else {
				printf("No Negative Elements");
			}
			getchar();
			break;
		case '6':
			i = -1;
			break;

		default:
			break;
		}

	}

	getchar();
	return 0;
}