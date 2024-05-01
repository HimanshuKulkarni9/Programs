#include<stdio.h>
void input(char[]);
void countchar(char[]);

void input(char ch[]) {

	printf("\n enter string\n");
	gets_s(ch, 100);

}

void countchar(char ch[]) {
	int i = 0;
	int count = 1;
	while (ch[i] != '\0') {
		if (ch[i] == ' ' && ch[i + 1] != ' ')
		{
			count++;
		}
		i++;
	}
	printf("\n %d ", count);
}

int main() {

	char ch[100];

	input(ch);
	countchar(ch);

	return 0;
}