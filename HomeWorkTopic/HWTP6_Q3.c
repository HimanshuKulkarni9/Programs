#include<stdio.h>
float aoc(int);

float aoc(int rad) {

	float area = 2 * 3.14 * rad;
	return area;

}


int main() {

	int radius;
	printf("\n enter the radius\n");
	scanf_s("%d", &radius);

	float area = aoc(radius);

	return 0;
}