#include<stdio.h>
int main() {			

	// assigment ternary operator 
	// Q1 Accept Three Integer Values from user 
	/*
	int a, b, c;
	printf("\n enter the values");
	scanf_s("%d%d%d", &a, &b, &c);

	int max = (a > b && a > c) ? (printf("\n a = %d is largest",a)) :
		(b > c) ? (printf("\n b = %d is largest",b)) :
		(printf("\n c =%d is largest",c));

	int min = (a < b && a < c) ? (printf("\n a = %d is smallest",a)) :
		(b < c) ? (printf("\n b = %d is smallest",b)) :
		(printf("\n c = %d is smallest",c));
		*/

	// Q2 Acc
	/*
	int num;
	printf("\n enter the value ");
	scanf_s("%d", &num);

	int res = (num % 2 == 0) ? printf("\n %d is even", num) : 
				printf("\n %d is odd", num);
	int div = (num % 5 == 0) ? printf("\n %d is divisible by 5", num) :
		printf("\n %d is not divisible by 5", num);
		*/

	// Q3  character from user
	 
	char ch;
	printf("\n enter the character ");
	scanf_s("%c", &ch);
	 
	
	 char check = ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) ?
		(printf("\n char %c is alphacharacter ", ch)) :
		(ch >= 48 && ch <= 57) ? printf("\n char %c is numeric",ch) :
		(printf("\n char %c is an symbole",ch));

	char cas = (ch >= 65 && ch <= 90) ? printf("\n %c is upper case char", ch) :
		(ch >= 97 && ch <= 122)?
		printf("\n %c is lower case char", ch): 
		printf("\n other");
		
	char up, lw;
	lw = ch + 32;
	up = ch - 32;

	char res = (ch >= 65 && ch <= 90) ?
		 (printf("\n %c lowercase is %c", ch, lw)) :
		(ch>=97&&ch<=122)?
		(printf("\n %c uppercase is %c", ch, up)):
		printf("\n other");

	 


	
	return 0;
}