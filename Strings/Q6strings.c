#include<stdio.h>
void input(char[]);
void reverseString(char[]);
void display(char[]);


void input(char c[]) {
	printf("\n input from gets method for first variable\n");
	fflush(stdin);
	gets_s(c,10);
}
void reverseString(char c[]) {
	int j = 0;
	while (c[j] != '\0') {
			j++;
		}
	char temp;
	printf("\n hii");
	for (int i = 0; i <= (j - 1)/2; i++) {
		
		temp = c[i];
		c[i] = c[j-i-1];
		c[j-i-1] = temp;
		
	}
	printf("\n from revere func\n %d\n",j);
	puts(c);
}
void display(char c[]) {
	printf("\n reverse string printing\n");
	
		puts(c);
	
}


int main() {

	char ch[10];
	input(ch);
	display(ch);
	reverseString(ch);
	display(ch);

	return 0;
}