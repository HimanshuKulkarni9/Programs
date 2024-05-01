#include<stdio.h>
int main() {

	int sum = 0;

	for (int i = 0; i <= 20; i++) {
		if (i % 2 == 0) {
			sum = sum + i;
		}
	}

	printf("\n sum of all even number from 1 to 20 is : %d", sum);

	return 0;
}