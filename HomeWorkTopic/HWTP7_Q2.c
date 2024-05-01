#include<stdio.h>
void aoc(float, float*);
void cfc(float, float*);

void aoc(float r, float* area) {
	*area = 2 * 3.14 * r * r;
}

void cfc(float r, float* res) {
	*res = 3.14 * r;
}


int main() {

	float radius;
	printf("\n enter the radius \n");
	scanf_s("%f", &radius);
	float aocr, cfcr;
	aoc(radius, &aocr);
	cfc(radius, &cfcr);

	printf("\n result aoc = %f", aocr);
	printf("\n result cfc = %f", cfcr);

	return 0;
}