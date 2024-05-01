#include<stdio.h>
int main() {
	int num;
	printf("\n enter the number");
	scanf_s("%d", &num);

	if (num < 0) {
		printf("\n number is negative");
	}
	else
	{
		printf("\n number is positive");
	}

}