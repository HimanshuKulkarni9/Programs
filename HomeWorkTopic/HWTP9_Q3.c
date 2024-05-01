#include<stdio.h>
void accept(int[], int);
void max(int[], int);

void accept(int arr[], int n) {
	printf("\n enter the values in arr\n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

}



int main() {

	printf("\n enter the num of value\n");
	int n;
	scanf_s("%d", &n);
	int arr[30];
	accept(arr, n);

	max(arr, n);

	return 0;
}