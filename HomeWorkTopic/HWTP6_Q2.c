#include<stdio.h>
void armstrong(int);

void armstrong(int num) {
	int temp = num;
	int sum = 0;
	

	for (int i = 1; i <= 3; i++) {
		int n = temp % 10;
		int cube = n * n * n;
		sum = sum + cube;
		temp /= 10;
	}
	if (sum == num) {
		printf("\n armstrong number");
	}
	else
	{
		printf("\n not armstrong");
	}
}




int main() {
	int num;
	printf("\n enter the num \n");
	scanf_s("%d", &num);

	armstrong(num);

	return 0;
}