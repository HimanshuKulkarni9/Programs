#include<stdio.h>
int main() {

	for (int i = 0; i <= 255; i++) {
		
					printf("\n ASCII value for %d = %c", i,i);

		if (i % 10 == 0) {
			getch(i);
		}
	}

	return 0;
}