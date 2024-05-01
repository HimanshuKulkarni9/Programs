#include<stdio.h>
int main() {

	printf("\n enter the year\n");
	int year;
	scanf_s("%d", &year);

	if (year % 4 == 0) {
		printf("\n leap year");
	}
	else if (year % 400 == 0 && year % 100 != 0) {
		printf("\n leap year");
	}
	else
	{
		printf("\n not leap year");
	}

}