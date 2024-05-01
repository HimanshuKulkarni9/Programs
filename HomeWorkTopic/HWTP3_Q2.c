#include<stdio.h>
int main() {

	int numerator, denominator;
	printf("\n enter the values for nemerator and denominator\n");
	scanf_s(" %d %d ", &numerator, &denominator);

	if (denominator != 0) {
		float result =(float) numerator / denominator;
	}
	else
	{
		printf("\n denominator cannot be zero");
	}

}