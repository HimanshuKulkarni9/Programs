#include<stdio.h>
int main() {
	printf("\n enter the number\n");
	int num;
	scanf_s("%d", &num);
	int fact = 1;
	for (int i = 1; i <= num; i++) {
		fact = fact * i;
	}
	printf("\n factorial of given number = %d", fact);
}