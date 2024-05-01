#include<stdio.h>
#include "demo.h"

int main() {
	/*
	int num;
	printf("\n enter the num");
	scanf_s("%d", &num);

	checknum(num);
	*/

	// pointers lab manual 17
	// program 1
	/*
	printf("\t choose \n \t 1 for circle \n \t 2 for rectangle");
	
	int choose;
	printf("\n enter your choice\n");
	scanf_s("%d", &choose);
	int len, bred, arr, prr;
		float rad,  prc;
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
	*/

	// program 2
	
	int base, index;
	int result = 1;

	printf("\n enter the value of base and index");
	scanf_s("%d %d", &base, &index);

	int temp = power(base, index, &result);

	printf("\n power of %d", result );
	if (temp == 0) {
		printf("\n overflow");
	}
	else {
		printf("\n %d", result);
	}
	

	// program 3
	/*
	int date, month, year;

	getDate(&date, &month, &year);

	printf("\n DD/MM/YY : %d/%d/%d", date, month, year);
	*/




	return 0;
}