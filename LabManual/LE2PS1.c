#include<stdio.h>
int main() {
	int rad;
	printf("\n enter the radius of circle\n");
	scanf_s("%d", &rad);

	float aoc = 2 * 3.14 * rad;

	printf("\n area of circle = %f", aoc);

}