#include<stdio.h>
#include"LE22.h"

int main() {

	int marks[5];

	accept(marks, 5);

	float avg;

	average(marks,5,&avg);

	printf("\n average = %.2f", avg);

	return 0;
}