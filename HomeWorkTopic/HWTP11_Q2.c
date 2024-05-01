#include<stdio.h>
void input(char[]);
void convert(char[]);

void convert(char ch[]) {
	for (int i = 0; ch[i] != '\0'; i++) {
		if (ch[i] == 'A' && ch[i] == 'Z') {
			ch[i] = ch[i] + 32;
		}
		else
		{
			if (ch[i] == 'a' && ch[i] == 'z') {
				ch[i] = ch[i] - 32;
			}
		}
	}

	printf("\n printing string\n");
	puts(ch);
}

void input(char ch[]) {
	printf("\n enter thr string\n");
	fflush(stdin);
	gets(ch,100);
}


int main() {

	char ch[100];

	input(ch);

	convert(ch);

	return 0;
}