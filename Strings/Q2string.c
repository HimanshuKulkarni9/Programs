#include<stdio.h>
/*
Q .2 : Declare Character Array in main() Function, Accept String From User Using input()
Function, Write Another Function printAlternate() which will print the alternate
character from string starting from 1st character.
*/


void input(char[]);
void display(char[]);
void alternate(char[]);


void input(char c[]) {
	printf("\n enter the string \n");
	fflush(stdin);
	gets_s(c, 30);
}

void display(char c[]) {
	printf("\n user accepted string ");
	puts(c);
}

void alternate(char c[]){

	printf("\nprinting alternate characters\n");
	int i = 0;

	while (c[i] != '\0') {
		if(i%2==0){
		puts(c[i]);
		}
		i = i + 1;
	}
	
	}


int main() {

	char ch[30];
	input(ch);
	display(ch);
	alternate(ch);

	return 0;
}