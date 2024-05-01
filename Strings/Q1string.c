#include<stdio.h>

//Q1


void input(char []);
void display(char[]);

void input(char c[]) {
	fflush(stdin);
	gets_s (c,30);
}
void display(char c[]) {
	puts(c);
}

int main() {
	char ch[30];
	printf("\n enter string\n");
	input(ch);
	display(ch);

	return 0;
}