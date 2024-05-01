#include<stdio.h>
char check(char);

char check(char ch) {

	if ((ch == 'A' || ch == 'Z') && (ch == 'a' || ch == 'z')) {
		return 1;
	}
	else {
		return 0;
	}

}



int main() {

	char ch;
	printf("\n enter the character");
	scanf_s("%c", &ch);


	int res = check(ch);

	if (res == 1) {
		printf("\n char is alphabet ");
	}
	else
	{
		printf("\n char is not alphabet");
	}

	return 0;
}

