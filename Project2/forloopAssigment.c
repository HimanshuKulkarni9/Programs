#include<stdio.h>
int main()
{
	// for loop assigment
	// Q 1. Accept Integer Value from User print Multiplication Table
	
	/*
	int num;
	printf("\n enter the value");
	scanf_s("%d", &num);
	printf("\n multiplication table of %d", num);
	
	for (int i = 1; i <= 10; i++) {	
		printf("\n %d * %d = %d", num, i, num * i);
	}
	*/

	//Q 2. Print Minimum And Maximum Value From User
	/*
	int min, max;
	printf("\n enter the min and max value");
	scanf_s("%d %d", &min, &max);

	printf("\n Printing all even numbers b/w range");
	for (int i = min; i <= max; i++) {
		if (i % 2 == 0) {
			printf("\n %d", i);
		}
	}

	printf("\n Printing all odd numbers b/w range");
	for (int i = min; i <= max; i++) {
		if (i % 2 != 0) {
			printf("\n %d", i);
		}
	}

	printf("\n Printing all numbers divisible by 7 b/w range");
	for (int i = min; i <= max; i++) {
		if (i % 7 == 0) {
			printf("\n %d", i);
		}
	}
	*/

	//Q 3. Accept 3 Digit Integer Value From User 
	
	int num,digit;
	printf("\n enter the 3 digit value\n");
	scanf_s("%3d", &num);
	int n1;
	for (int i = 1; i <= 3; i++) {
		 int n = num % 10;
		num /= 10;

		printf("%d", n);
	 n1 = n;
	
	}
	(printf("%d", n1 * n1));

	//Q 4. Accept Integer Value From User Check That Number Is Prime Or Not 
	/*
	int num, temp = 0;
	printf("\n enter the value to check is prime or not");
	scanf_s("%d", &num);

	int m = num / 2;

	for (int i = 2; i <= m; i++) {
		if (num % i == 0) {
			printf("\n %d number is not prime", num);
			temp = 1;
		}

	}
	if (temp == 0) {
		printf("\n %d number is prime", num);
	}

	*/

	//Q5. Accept Integer Value From User And Print Factorial of that number , if overflow Occurs
	/*
	int num,fact = 1;
	printf("\n enter the value for factorial");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++) {
		fact = fact * i;
	}
	printf("\n factorial of %d is %d", num, fact);
	*/
	/*
	//Q 6. Print 
	printf("\n Printing all the uppercase characters");
	for (int i = 65; i <= 122; i++) {
		if (i >= 65 && i <= 90) {
			printf(" %c ", i);
		}
	}
	printf("\n Printing all the lowercase characters");
	for (int i = 65; i <= 122; i++) {
		if (i >= 97 && i <= 122) {
			printf(" %c ", i);
		}
	}

	printf("\n Printing all vowels characters");
	for (int i = 65; i <= 122; i++) {
		if (i >= 65 && i <= 90 || i >= 97 && i <= 122){
		if (i =='A'|| i == 'a' || i == 'E' || i == 'e' || i == 'i' ||
			i == 'I' || i == 'o' || i == 'O' || i == 'U' || i == 'u')
		{
			printf(" %c ", i);
		}

		}

	}
	printf("\n Printing all consonent characters");
	for (int i = 65; i <= 122; i++) 
	{
		if (i >= 65 && i <= 90 || i >= 97 && i <= 122){
		if (i == 'A' || i == 'a' || i == 'E' || i == 'e' || i == 'i' ||
			i == 'I' || i == 'o' || i == 'O' || i == 'U' || i == 'u')
			{
			continue;
			}
			else
			{
			printf(" %c ", i);
			}
		}	

	}

	printf("\n Printing every 4th character");
	for (char i = 'A'; i <= 'z'; i = i+4 ) {
		if(i>=65 && i<=90 || i>=97 && i<=122){
		printf(" %c ", i);
		}
		
	}

	printf("\n Printing every alternate character");
	for (char i = 'A'; i <= 'z'; i = i + 2) {
		if (i >= 65 && i <= 90 || i >= 97 && i <= 122) {
			printf(" %c ", i);
		}
	}

	printf("\n Printing every alternate character in lowercase");
	for (char i = 'A'; i <= 'Z'; i++) {
		if (i >= 65 && i <= 90) {
			printf(" %c ", i);
			i++;
			printf(" %c ", i + 32);

			}
			
		}

	*/

	// Q7	. Print Values As Follow -- 1.00, 1.20, 1.40, 1.60, ..............10.00

	/*
	for (float i = 1.00; i < 10.00; i=i+0.20) {
		float a = i + 0.20;
		printf("\n %.2f", a);
	
	}
	*/






	return 0;
}
