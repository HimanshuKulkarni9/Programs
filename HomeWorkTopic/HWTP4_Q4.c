#include<stdio.h>
int main()
{
	int lower, upper;
	printf("\n enter values for lower and upper limit\n");
	scanf_s("%d %d", &lower, &upper);

	for (int i = lower; i <= upper; i++) {
		if (i % 3 == 0) {
			printf("\n %d", i);
		}
	}

}