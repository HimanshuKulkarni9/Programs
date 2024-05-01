#include<stdio.h>
int main() {

	for (int i = 6; i <= 9; i++) {
		printf("\n Multipication table of %d", i);
		for (int j = 1; j <= 10; j++) {
			printf("\n %d * %d = %d", i, j, i * j);
		}
		printf("\n");
	}

	return 0;
}