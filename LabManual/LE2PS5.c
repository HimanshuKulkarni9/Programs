#include<stdio.h>
void check(int*);

void check(int* age) {

	if (*age < 18) {
		printf("\n lisence cannot issue");
	}
	else {
		printf("\n lisence can issue");
	}

}



int main() {
	int age;
	printf("\n enter the age\n");
	scanf_s("%d", &age);

	check(&age);

	return 0;
}