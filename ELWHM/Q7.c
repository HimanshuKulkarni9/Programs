#include<stdio.h>
#include<math.h>
int main() {
	printf("\nenter the number\n");
	int num;
	scanf_s("%d", &num);
	int temp = num;
	int len = 0;
	while (temp != 0) {
		len++;
		temp /= 10;
	}

	if (len == 4 && num > 0) {
		int ori = num;
		int sum = 0, r;
		while (num != 0) {
			r = num % 10;
			sum = sum + r;
			num /= 10;
		}
		if (sum % 3 == 0 || sum % 5 == 0) {
			printf("\n number %d is divisible of 3 or 5", ori);
		}
		else {
			printf("\n not divisible");
		}
	}
	else {
		printf("\n invalid entry");
	}
		      
		 
	return 0;
}