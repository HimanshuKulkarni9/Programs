#include<stdio.h>
void input(char[], char[]);
void concatinate(char[], char[]);


void input(char f[], char s[]) {
	printf("\n enter first string\n");
	gets_s(f,10);

	printf("\n enter second string\n");
	gets_s(s, 10);
}

void concatinate(char f[], char s[]) {
	char c[20];
	int k = 0;
	int i, j;
	while (f[k] != '\0') {
		k++;
	}
	int l = 0;
	while (s[l] != '\0') {
		l++;
	}

	for ( i = 0; i < k; i++) {
		c[i] = f[i];
	}
	for ( j = 0; j < l; j++,i++) {
		c[i] = s[j];
	}
	c[i] = 0;
	
	printf("\n concatinate string \n");
		puts(c);
		

}


int main() {

	char f[10];
	char s[10];

	input(f, s);
	printf("\n calling concatinate func");
	concatinate(f, s);
}