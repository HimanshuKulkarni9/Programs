#include<stdio.h>
int main() {

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 10; j++) {
			if (i == 1 && j == 1) {
				printf("%c", 218);
			}
			if (i == 5 && j == 1) {
				printf("%c", 192);
			}
			if (i == 1 && j == 10) {
				printf("%c", 191);
			}
			if (i == 5 && j == 10) {
				printf("%c", 217);
			}
			if(j > 1 && j < 10 && i == 1) {
				printf("%c", 196);
			}
			if (j > 1 && j < 10 && i == 5) {
				printf("%c", 196);
			}
			if (i > 1 && i < 5 && j == 1) {
				printf("%c", 179);
			}
			if (i > 1 && i < 5 && j == 10) {
				printf("        %c", 179);
			}
		}
		printf("\n");
	}

	return 0;
}