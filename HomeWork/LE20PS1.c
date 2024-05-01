#include<stdio.h>
#define COMPARE(a,b) a>b

int main() {

	int n1, n2, n3;
	printf("\n enter numbers n1,n2,n3\n");
	scanf_s("%d %d %d", &n1, &n2, &n3);

	if (COMPARE(n1, n2)) {
		printf("\n n1 is greater");
	}
	else if (COMPARE(n2, n3)) {
		printf("\n n2 is greater");
	}
	else {
		printf("\n n3 is greter");
	}

	return 0;
}