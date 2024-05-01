#include<stdio.h>
/*
Q .4.Declare Character Array in main(), Accept FirstName and LastName from user in
input() function(should be accepted multiple words)
-- using gets()
--Using scanf()
write a function display(), which will display the FirstName and LastName
-- Using puts()
--Using printf()
*/

void input(char[], char[]);
void display(char[], char[]);

void input(char c[],char b[]) {
	printf("\n from gets method\n");
	
	fflush(stdin);
	gets_s(c,20);

	printf("\n from scanf method\n");
	fflush(stdin);
	scanf_s("%10s", b);
}
void display(char c[],char b[]) {
	printf("\n printing from put method \n");
	puts(c);

	printf("\n printing from print method\n");
	printf("%s", b);
}



int main() {
	 
	char first[20];
	char second[20];

	input(first, second);
	display(first, second);


	return 0;
}