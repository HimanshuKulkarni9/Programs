#include<stdio.h>
int main() {

	int number, digit;
	printf("\n enter the number and digit");
	scanf_s("%d %d", &number, &digit);
	if (number < 0) {
		printf("\n invalid entery");
	}
	else{
		int res = 1;
		for (int i = 1; i <= digit; i++) {
			res = res * number;
		}
		printf("\n the power of number for given digit is : %d", res);
	}

	return 0;
}