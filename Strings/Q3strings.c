#include<stdio.h>
/*
Q .3.Declare character array in main() function, Accept String from user in input() function
, write a function printCharacter() which will print every third character from string .
*/
void input(char[]);
void display(char[]);
void alternate3(char[]);


void input(char c[30]) {
	printf("\n enter the string \n");
	fflush(stdin);
	gets_s(c, 30);
}

void display(char c[30]) {
	printf("\n user accepted string ");
	puts(c);
}

void alternate3(char c[30]) {

	printf("\nprinting alternate 3rd characters\n");
	int i = 0;
	while (c[i] != 0) {
		
		    if(i%3==0){
			  printf("%c\n", c[i]);
			 
	       }
	     i++;
	}
	c[i] = 0;

}

int main() {

	char ch[30];
	input(ch);
	display(ch);
	alternate3(ch);


	return 0;
}