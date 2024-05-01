#include<stdio.h>
int main() {
	for (int i = 1; i <= 100; i++) {

			int flag = 0;

		for (int j = 2; j < i/2; j++) {
			if (i % j == 0 ) {
				flag = 1;
			}
			
		}
		if (flag == 0 && i!=1) {
			printf("\n %d is prime number ", i);
		}
	}
	

	return 0;
}