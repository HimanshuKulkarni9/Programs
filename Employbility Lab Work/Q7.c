#include<stdio.h>
void compare(int, int, int);

void compare(int s1, int s2, int s3) {
	if (s1 > s2 && s1 > s3) {
		printf("\n s1 has highest marks");
	}
	else if (s2 > s3) {
		printf("\n s2 has highest marks");
	}
	else {
		printf("\n s3 has highest marks");
	}
}
int main() {

	int s1, s2, s3;
	printf("\n enter the marks of three students\n ");
	scanf_s("%d %d %d", &s1, &s2, &s3);

	compare(s1, s2, s3);



	return 0;
}