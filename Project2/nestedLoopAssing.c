#include<stdio.h>
int main() {

	// Q 1 . Accept minimum and maximum value from user

	int min, max;
	printf("\n enter the min and max values");
	scanf_s("%d %d", &min, &max);
	
	// multiplication table

	for (int i = min; i <= max; i++) {
		for (int j = 1; j <= 10; j++) {
		if (i % 2 == 0) {
		printf(" %d ", i * j);
		}
		}
		printf("\n ");
	
	}
	// for palindrom
	
	for (int i = min; i <= max; i++) {
		int num = i;
		int count = 0;
		int temp = num;

		while (num > 0) {
			num /= 10;
			count++;
		}
		//printf("%d\n", count);
		num = temp;
		int onum = num, rev = 0, n1;

		for (int i = 1; i <= count; i++) {
			n1 = onum % 10;
			rev = rev * 10 + n1;
			onum /= 10;

		}

		if (num == rev) {
			printf("%d num is palindrom %d = %d \n", num, num, rev);
		}
		
	}

	// for armstrong number

	for (int i = min; i <= max; i++) {
		int num = i,count=0;
		int temp = num;
		
		while (num > 0) {

		}


	}


	return 0;
}