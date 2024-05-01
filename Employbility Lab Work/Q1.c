#include<stdio.h>
void factorial(int);
void square(int);

void factorial(int num) {
	int sum = 1;
	for (int i = 1; i <= num; i++) {
		sum = sum * i;
	}

	printf("\n %d is factorial of number %d", sum, num);

}

void square(int num) {
	int sqr = num * num;
	printf("\n %d is the square fo given number %d", sqr, num);
}

int main() {
	int choose;
	printf("\n choose \n 1. factorial \t 2. square\n");
	scanf_s("%d", &choose);

	switch (choose)
	{

	case 1: {
		printf("\n you have choose factorial");
		int num;
		printf("\n enter thr number to find factorial\n");
		scanf_s("%d", &num);
			factorial(num);
		break;
	}
	case 2: {
		printf("\n you have choose square");
		int num;
		printf("\n enter the number for square\n");
		scanf_s("%d", &num);
		square(num);
	}
	default :{
		printf("\n wrong input");
		  }
	}

	return 0;
}