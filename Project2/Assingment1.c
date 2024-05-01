#include<stdio.h>
int main() {
	
	// Q1 . Declare And Initialize Variable to store
	int a = 1;
	float b = 1.23;
	char ch = 'a';

	printf("\n int value : %d \n", a);
	printf("\n float value : %f \n", b);
	printf("\n char value : %c \n", ch);

	printf("\n =================== \n");

		// Q2 Declare And Initialize Variable to store
		// Manipulate Value , print value before and after Manipulation

	printf("\n int value : %d \n", ++a);
	printf("\n float value : %f \n", ++b);
	printf("\n char value : %c \n", ch == 'a'+1);


	return 0;
}