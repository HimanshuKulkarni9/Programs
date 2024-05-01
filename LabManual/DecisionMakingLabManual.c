#include<stdio.h>
int main() {
	
	// 1 of hm lab manual
	/*
	int num;
	printf("\n enter the value");
	scanf_s("%d", &num);
	if (num % 5 == 0) {
		printf("\n number is divisible by 5");
	}
	else {
		printf("\n not divisible");
	}
	*/

	// 2 of hm lab manual
	/*
	int n, d;
	printf("\n enter the lus for numerator and denominator");
	scanf_s("%d %d", &n, &d);
	float res;
	if (d != 0) {
		 res =(float) n / d;
		 printf("\n result is : %.2f", res);
	}
	else
	{
		printf("\n denominator cannot be zero");
	}
	*/

	// 3 of hm lab

	int age; char gen;
	printf("\n enter age and gender of candidate");
	scanf_s("%d %c", &age, &gen);

	if (gen == 'm' || gen == 'f') {
		if (age > 25 && gen == 'f') {
			printf("\n eligible of policy 1");
		
		if (age > 25 || gen == 'm') {
			printf("\n eligible for policy 2");
		}
		
		}
		else
		{
			printf("\n not eligibe for any policy");
		}
	}
	else
	{
		printf("\n wrong enrty");
	}


	return 0;
}