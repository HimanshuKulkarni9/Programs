#include<stdio.h>
int main() {

	int year;
	printf("\n enter the year");
	scanf_s("%d", &year);
	if ((year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0))) {
		printf("\n %d year is leap year", year);
	}
	else {
		printf("\n %d is not leap year", year);
	}

	int leap = ((year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0)))
		? printf("\n leap year") : printf("\n not leap year");
	

	return 0;
}