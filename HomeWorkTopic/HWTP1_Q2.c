#include<stdio.h>
int main() {
	int num;
	printf("\n enter the value of num\n");
	scanf_s("%d", &num);

	if (num % 5 == 0) {
		printf("\n %d is divisible of 5", num);
	}
	else
	{
		printf("\n not divisible of 5");
	}
}