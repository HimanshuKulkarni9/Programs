#include<stdio.h>
int main() {

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 7; j++) {
			if (i == 0 || j == 0 || i == 5 || j == 6) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}