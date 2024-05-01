#include<stdio.h>
/*
Q . 5: Declare two character Array in main() Function Of same size, Accept One String From
User And Store in one string(String should be Accepted in input() function)
, Write a function copyString() which will copy the content of initialized array
*/


void input(char[]);
void display(char[]);
void copystring(char[], char[]);

void input(char c[]) {
	printf("\n from gets method for first variable\n");

	fflush(stdin);
	gets_s(c, 20);

}
void display(char c[]) {
	printf("\n printing from put method \n");
	puts(c);

}
void copystring(char f[],char s[]) {
	
	for (int i = 0; f[i]!='\0'; i++) {
		s[i] = f[i];
	}
}

int main() {

	char first[20];
	char second[20];

	input(first);
	copystring(first, second);
	printf("\n for first\n");
	display(first);
	printf("\n for second\n");
	display(second);



	return 0;
}