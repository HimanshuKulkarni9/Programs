#include<stdio.h>

void getDate(int*, int*, int*);


void getDate(int* d, int* m, int* y) {
	printf("\n enter the date/month/year\n");
	scanf_s("%2d%2d%2d", d, m, y);
}

int main() {
	int date, month, year;

	getDate(&date, &month, &year);

	printf("\n DD/MM/YY : %d/%d/%d", date, month, year);

	return 0;
}