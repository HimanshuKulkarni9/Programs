#include<stdio.h>
int checknum(int num) {

	if (num % 2 == 0) {
		printf("\n even");
	}else{

		printf("\n odd");
	}

}

void circle(float r, float *ac, float *pc) {
	*ac = 3.14 * r * r;
	*pc = 2 * 3.14 * r;
}
void rectangle(int l, int b, int *ar, int *pr) {
	*ar = l * b;
	*pr = 2*(l + b);
}

int power(int b, int i, int *res) {
	
	for (int j = 1; j <= i; j++) {
		
		*res = *res * b;
		if (*res < 0) 
		break;
		
	}

	if (*res < 0) {
		return 0;
	}
	else
	{
		return 1;
	}
	
}

void getDate(int* d, int* m, int* y) {
	printf("\n enter the date/month/year\n");
	scanf_s("%2d%2d%2d", d, m, y);
}
