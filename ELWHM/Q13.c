#include<stdio.h>
void check(int);

void check(int num) {
	int temp = num;
	int rev = 0, r;
	if (temp != 0 || temp > 0) {
		while (temp != 0) {
			 r = temp % 10;
			rev = rev * 10 + r;
			temp = temp / 10;
		}
		if (num == rev) {
			printf("\n number is palindrome");
		}
		else {
			printf("\n number is not palindrome");
		}
	}
	else {
		printf("\n invalid entry");
	}
}


int main() {

	printf("\n enter the number \n");
	int num;
	scanf_s("%d", &num);

	check(num);

	return 0;
}