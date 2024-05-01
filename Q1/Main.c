#include<stdio.h>
#include"AreaPeri.h"

int main() {
	printf("\nenter the side for square\n");
	int s;
	scanf_s("%d", &s);
	aos(s);
	pos(s);

	printf("\n enter the base,height,side for triangle\n");
	int b, h, l;
	scanf_s("%d %d %d", &b, &h, &l);
	aot(b, h);
	pot(l);

	printf("\n enter the radius for circle\n");
	int r;
	scanf_s("%d", &r);
	aoc(r);
	poc(r);


	return 0;
}