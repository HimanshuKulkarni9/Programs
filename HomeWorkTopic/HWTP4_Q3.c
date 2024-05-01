#include<stdio.h>
int main() {
	printf("\n enter the number\n");
	int num;
	scanf_s("%d", &num);
	int temp = num;
	int rev = 0;
	while (temp != 0) {
		int n = temp % 10;
		rev = rev * 10 + n;
		temp /= 10;
	}
	printf("\n original number = %d\n reverse number = %d", num, rev);
}