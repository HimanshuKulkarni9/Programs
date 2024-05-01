#include<stdio.h>
void max(int, int);

void max(int first, int second) {
	if (first > second) {
		printf("\n first number = %d is greater than second = %d", first, second);
	}
	else {
		printf("\n second number = %d is greater than first = %d", second, first);
	}
}


int main() {

	printf("\n enter first number\n");
	int a;
	scanf_s("%d", &a);
	printf("\n enter second number\n");
	int b;
	scanf_s("%d", &b);

	max(a, b);

	return 0;
}