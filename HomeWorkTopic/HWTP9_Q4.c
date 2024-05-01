#include<stdio.h>
void merge(int[], int[], int[]);

void merge(int a[], int b[], int c[]) {

	int i = 4;
	for (int i = 0; i <= 3; i++) {
		c[i] = a[i];
	}
	for (int j = 0; j <= 7; j++, i++) {
		c[i] = b[j];
	}
}

int main() {

	int a[4] = { 1,2,3,4 };
	int b[8] = { 5,6,7,8,9,10,11,12 };
	int c[12];

	merge(a, b, c);
	for (int i = 0; i <= 12; i++) {
		printf("%c", c[i]);
	}

	return 0;
}