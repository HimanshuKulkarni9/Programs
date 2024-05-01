#include<stdio.h>
char grade(float);

char grade(float mark) {

	if (mark >= 90) {
		return 'A';
	}
	else if (mark >= 75 && mark <= 90) {
		return 'B';
	}
	else if (mark >= 60 && mark <= 75) {
		return 'C';
	}
	else {
		return 'D';
	}

}

int main() {

	float aggmarks;
	printf("\n enter the marks\n");
	scanf_s("%f", &aggmarks);

	char res = grade(aggmarks);

	printf("\n grade = %c", res);

	return 0;
}