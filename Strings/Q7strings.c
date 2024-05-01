#include<stdio.h>
void input(char[]);
void reverseString(char[]);
void display(char[]);
void checkpalindrom(char[]);


void input(char c[]) {
	printf("\n input from gets method for first variable\n");
	fflush(stdin);
	gets_s(c, 10);
}
void reverseString(char c[]) {
	int j = 0;
	while (c[j] != '\0') {
		j++;
	}
	char temp;
	for (int i = 0; i <= (j - 1) / 2; i++) {

		temp = c[i];
		c[i] = c[j - i - 1];
		c[j - i - 1] = temp;

	}
}
void display(char c[]) {
	printf("\n reverse string printing\n");
	puts(c);
}
void checkpalindrom(char ch[]) {
	
	int j = 0; int flag = 0;
	while (ch[j] != '\0') {
		j++;
	}
	char temp;
	for (int i = 0; i <= (j - 1) / 2; i++) {

		temp = ch[i];
		ch[i] = ch[j - i - 1];
		ch[j - i - 1] = temp;
		
		if ( ch[i] = ch[i-j-1]){
			 flag = 1;
		}
	}

	if (flag == 1) {
		printf("\n string is palindrome");
	}
	
	
}


int main() {

	char ch[10];
	input(ch);
	reverseString(ch);
	display(ch);

	checkpalindrom(ch);

	return 0;
}