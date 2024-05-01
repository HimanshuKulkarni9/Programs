#include<stdio.h>
int main() {
	int n, m;
	int sum = 0;

	printf("\n enter the lower limit and upper limt");
	scanf_s("%d %d", &n, &m);

	for (int i = 0; i <= 20; i++) {
		if (i % 2 == 0) {
			sum = sum + i;
		}
	}

	printf("\n sum of all even number from 1 to 20 is : %d", sum);

	return 0;
}