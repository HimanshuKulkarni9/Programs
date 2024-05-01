#include<stdio.h>
int main() {
	int rad;
	printf("\n enter radius\n");
	scanf_s("%d", &rad);

	float pi = 3.14;

	float aoc = pi * rad * rad;

	printf("\n area of circle is = %f", aoc);

}