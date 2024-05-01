#include<stdio.h>
int main() {

	int age;
	char gender;

	printf("\n enter the age \n");
	scanf_s("%d", &age);
	printf("\n enter the gender \nfor female =f \n for male = m\n");
	scanf_s("%c", &gender);

	if (age > 25 && gender == 'f') {
		printf("\n eligible for policy 1");
	}
	else if (age > 25 && gender == 'm') {
		printf("\n eligible for policy 2");
	}
	else
	{
		printf("\n eligible for policy 3");
	}

}