#include<stdio.h>
int pow(int, int);

int pow(int p, int n) {
	int sum = 1;

	for (int i = 1; i <= p; i++) {
		sum = sum * n;
	}

	return sum;
}

int main() {

	int power, num;
	printf("\n enter the power and number\n");
	scanf_s("%d %d", &power, &num);

	int result = pow(power, num);

	printf("\n result = %d", result);

	return 0;
}