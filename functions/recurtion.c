#include<stdio.h>


int* display(int n) {
	static int res = 1;

	if (n > 0) {
		res = res * n;
		display(--n);
	}
	return &res;
}


int main() {
	int num; 
	printf("\n enter num\n");
	scanf_s("%d", &num);
	int *result = display(num);
	printf("\n result is : %d \n", *result);
	return 0;
}