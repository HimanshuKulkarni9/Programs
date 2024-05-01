#include<stdio.h>
int main() {

	int num = 3425;

	int n1 = num % 10;
	num /= 10;
	int n2 = num % 10;
	num /= 10;
	int n3 = num % 10;
	num /= 10;
	int n4 = num % 10;
	num /= 10;

	int sum = n1 + n2 + n3 + n4;

	printf("\n sum of digits = %d", sum);

}
