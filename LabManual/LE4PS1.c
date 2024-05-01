#include<stdio.h>
int main() {
	printf("\n enter the 5 subjects mark\n");
	int s1, s2, s3, s4, s5;
	scanf_s("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
	
	int sum = s1 + s2 + s3 + s4 + s5;

	float avg = (float)sum / 5;

	printf("\n Avrage of 5 subjects = %f", avg);

}