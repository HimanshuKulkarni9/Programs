#include<stdio.h>
void input(char[]);
void countchar(char[]);

void input(char ch[]) {

	printf("\n enter string\n");
	gets_s(ch, 20);

}

void countchar(char ch[]) {
	int i = 0;
	int count = 0;
	while (ch[i] != '\0') {
		if ((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z'))
		{
			count++;
		}
		i++;
	}
	printf("\n %d ", count);
}

int main() {

	char ch[20];

	input(ch);
	countchar(ch);

	return 0;
}