#include<stdio.h>
int main() {
	int num1, num2;
	printf("\n enter the value of num1\n");
	scanf_s("%d", &num1);
	printf("\n enter the value of num2\n");
	scanf_s("%d", &num2);

	if (num1 > num2) {
		printf("\n %d > %d",num1,num2);
	}
	else {
		printf("\n  %d > %d",num2,num1);
	}

}