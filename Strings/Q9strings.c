#include<stdio.h>
void input(char[], char[]);
void compare(char[], char[]);

void input(char str1[], char str2[]) {
	printf("\n enter first string\n");
	gets_s(str1, 10);

	printf("\n enter second string\n");
	gets_s(str2, 10);
}

void compare(char str1[], char str2[]) {
	int i = 0; int diff;
	int k = 0;
	while (str1[k] != '\0') {
		k++;
	}
	int l = 0;
	while (str2[l] != '\0') {
		l++;
	}

	while ((str1[i] - str2[i] == 0) && (str1[i] != 0 && str2[i] != 0)) {
		i++;
	}
	

	

}

int main() {
	char str1[10];
	char str2[10];

	input(str1, str2);

	compare(str1, str2);

}