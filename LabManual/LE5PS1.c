#include<stdio.h>
int main() {
	int num;
	printf("\n enter the 4 digit num\n");
	scanf_s("%4d", &num);

	int n1 = num % 10;
	num /= 10;
	int n2 = num % 10;
	num /= 10;
	int n3 = num % 10;
	num /= 10;
	int n4 = num % 10;

	int sum = n1 + n2 + n3 + n4;

	printf("\n sum of first four digits = %d", sum);

}