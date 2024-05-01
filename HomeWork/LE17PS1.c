#include<stdio.h>
void circle(float, float*, float*);
void rectangle(int, int, int*, int*);



void circle(float r, float* ac, float* pc) {
	*ac = 3.14 * r * r;
	*pc = 2 * 3.14 * r;
}
void rectangle(int l, int b, int* ar, int* pr) {
	*ar = l * b;
	*pr = 2 * (l + b);
}

int main() {
	printf("\t choose \n \t 1 for circle \n \t 2 for rectangle");

	int choose;
	printf("\n enter your choice\n");
	scanf_s("%d", &choose);
	int len, bred, arr, prr;
	float rad, prc;
	float arc;
	switch (choose)
	{

	case 1: {

		printf("\n enter the radius");
		scanf_s("%f", &rad);
		circle(rad, &arc, &prc);
		printf("\n area of circle = %f", arc);
		printf("\n peri of circle = %f", prc);
		break;
	}

	case 2: {

		printf("\n enter the length and breadth\n");
		scanf_s("%d %d", &len, &bred);
		rectangle(len, bred, &arr, &prr);
		printf("\n area of rectangle = %d", arr);
		printf("\n peri of rectangle = %d", prr);
		break;
	}

	default:
	{
		printf("\n invalid entery");

	}

	}
}