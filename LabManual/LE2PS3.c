#include<stdio.h>
int main() {
	int num;
	printf("\n enter the value of num\n");
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("even");

	}
	else
	{
		printf("\n odd");
	}
}