#include<stdio.h>
int main() {

	printf("\n enter number \n");
	int num;
	scanf_s("%d", &num);

	if (num % 5 == 0) {
		printf("\n %d is divisible by 5",num);
	}
	else
	{
		printf("\n not divisible by 5");
	}

}