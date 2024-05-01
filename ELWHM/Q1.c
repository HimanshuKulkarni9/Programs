#include<stdio.h>

int main() {

	printf("\n To exit press 0\n press any key to start\n");
	int a;
	scanf_s("%d", &a);

	do {
		printf("\n choose 1. for factorial \n 2. for square \n 3.for exit \n");

		int choose;
		scanf_s("%d", &choose);		
		switch (choose) {
		case 1:
			printf("\n enter the num for factorial\n");
			int num, fact = 1;
			scanf_s("%d", &num);

			for (int i = num; i >= 1; i--) {
				fact = fact * i;
			}
			printf("\n factiorial = %d", fact);
			break;

		case 2:
			printf("\n enter the num for square\n");
			int n;
			scanf_s("%d", &n);

			printf("\n square of num = %d", n * n);
			break;

		case 3:
			exit(0);
			
		}
	} while (a != 0);

	return 0;
}