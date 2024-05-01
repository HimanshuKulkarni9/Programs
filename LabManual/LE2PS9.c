#include<stdio.h>
int main() {
	printf("\n enter the number\n");
	int num;
	scanf_s("%d", &num);
	for (int i = 1; i <= num / 2; i++) {
		if (num % i == 0) {
			printf("\n not prime");
		}
		else
		{
			printf("\n %d is prime", num);
		}
	}

}