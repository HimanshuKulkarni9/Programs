#include<stdio.h>
void max(int, int, int);

void max(int s1, int s2, int s3) {
	if (s1 > s2 && s1 > s3) {
		printf("\n s1 is highest marks %d", s1);
	}
	else if (s2 > s3) {
		printf("\n s2 has highest marks %d", s2);
	}
	else {
		printf("\n s3 has highest marks %d", s3);
	}
}


int main() {

	int s1, s2, s3;
	printf("\n enter the marks of s1\n");
	scanf_s("%d", &s1);
	printf("\n enter the marks of s2\n");
	scanf_s("%d", &s2);
	printf("\n enter the marks of s3\n");
	scanf_s("%d", &s3);

	max(s1, s2, s3);

	return 0;
}