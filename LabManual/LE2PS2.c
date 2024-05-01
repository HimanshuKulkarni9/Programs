#include<stdio.h>
int main() {
	int num1, num2;
	printf("\n enter the value of num1 and num2\n");
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2) {
		printf("\n num 1 greater than num2");
	}
	else {
		printf("\n num2 is greater than num1");
	}
}