#include<stdio.h>
void input(char[]);
void countsentence(char[]);

void input(char ch[]) {

	printf("\n enter string\n");
	gets_s(ch, 100);

}

void countsentence(char ch[]) {
	int i = 0;
	int count = 0;
	while (ch[i] != '\0') {
		if (ch[i] == '.' && ch[i + 1] != '.')
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
	countsentence(ch);

	return 0;
}