#include<stdio.h>
void power(int, int);

void power(int number, int digit) {
	if (number < 0) {
		printf("\n invalid entery");
	}
	else {
		int res = 1;
		for (int i = 1; i <= digit; i++) {
			res = res * number;
		}
		printf("\n the power of number for given digit is : %d", res);
	}
}

int main() {

	int number, digit;
	printf("\n enter the number and digit");
	scanf_s("%d %d", &number, &digit);
	
	power(number, digit);

	return 0;
}