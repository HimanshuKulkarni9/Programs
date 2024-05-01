#include<stdio.h>
#include "AreaPeri.h"

void aos(int s) {
	printf("\narea of square = %d", AOS(s));
}

void pos(int s) {
	printf("\nperimeter of squre = %d", POS(s));
}

void aot(int b, int h) {
	printf("\n area of triangle = %f", AOT(b, h));
}

void pot(int l) {
	printf("\n perimeter of triangle = %d", POT(l));
}

void aoc(int r) {
	printf("\n area of circle = %f", AOC(r));
}

void poc(int r) {
	printf("\n perimeter of circle = %f", POC(r));
}