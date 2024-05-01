#include<stdio.h>
int main() {

	printf("\n enter the number\n");
	int num;
	scanf_s("%d", &num);
	int sum = 0;
	while (num != 0) {
		int n = num % 10;
		sum = sum + n;
		num /= 10;
	}
	printf("\n sum of digits %d", sum);

}