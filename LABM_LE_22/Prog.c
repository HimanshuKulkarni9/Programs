#include<stdio.h>

void accept(int arr[], int n) {
	printf("\n enter the 5 marks\n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
}

void average(int mark[],int n, float *a) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + mark[i];
	}

	*a = sum / n;

}