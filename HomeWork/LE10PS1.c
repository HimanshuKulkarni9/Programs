#include<stdio.h>
int main() {

	int num, temp = 0;
	printf("\n enter the value to check is prime or not");
	scanf_s("%d", &num);

	int m = num / 2;

	for (int i = 2; i <= m; i++) {
		if (num % i == 0) {
			printf("\n %d number is not prime", num);
			temp = 1;
			break;
		}

	}
	if (temp == 0) {
		printf("\n %d number is prime", num);
	}

	return 0;
}