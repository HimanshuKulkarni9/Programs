#include<stdio.h>
#include"LE24.h"

int main() {

	int arr[100], n;
	printf("\n enter the no.of values \n");
	scanf_s("%d", &n);
	accept(arr, n);

	prob_a(arr, n);

	prob_b(arr, n);

	return 0;
}