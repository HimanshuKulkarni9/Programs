#include<stdio.h>
int main() {

	int num;
	printf(" enter number\n");
	scanf_s("%d", &num);
	int count = 0, temp = num;
	while (num != 0) {
		num = num / 10;
		count++;
	}
	printf("%d\n", count);
	num = temp;
	int ori = num;
	int  sum = 0;
	while (ori != 0) {
		int res = 1;
		int n = ori % 10;

		for (int j = 1; j <= count; j++) {
			res = res * n;
		}
		sum = sum + res;

		ori /= 10;

	}

	printf("%d\n", sum);
	if (num == sum) {
		printf("%d is armstrng", num);
	}
	else {
		printf("%d is not armstrong ", num);
	}

	return 0;
}