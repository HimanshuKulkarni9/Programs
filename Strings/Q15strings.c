#include<stdio.h>

void input(char[]);
void count(char[]);


void input(char str[]) {

	printf("\n enter string\n");
	gets_s(str, 100);

}
void count(char str[]) {
	int upper = 0, lower = 0, sym = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			upper++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			lower++;
		}
		else if (str[i] == ' ' || str[i] == '.'||(str[i] >= '0' && str[i] <= '9')) {
			continue;
		}
		else {
			sym++;
		}

	}
	printf("\n %d times upper character", upper);
	printf("\n %d times lower character", lower);
	printf("\n %d times symbol character", sym);
}


int main() {
	char str[100];
	input(str);

	count(str);
}