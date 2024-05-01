#include<stdio.h>
int main() {
	int numerator, denominator, quotient, remainder;

	printf("\n enter the value of numerator and denominator\n");
	scanf_s("%d %d", &numerator, &denominator);

	remainder = numerator % denominator;
	quotient = numerator / denominator;

	printf("\n remainder = %d", remainder);
	printf("\n quotient = %d", quotient);

}