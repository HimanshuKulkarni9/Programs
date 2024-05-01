#include<stdio.h>
void accept(int[],int);
void max(int[], int);

void accept(int arr[] , int n) {
	printf("\n enter the values in arr\n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	
}

void max(int arr[] , int n) {
	int maxv = arr[0];

	for (int i = 0; i < n; i++) {
		if (maxv < arr[i]) {
			maxv = arr[i];
		}
	}

	printf("\n max value in arr is = %d", maxv);

}

int main() {

	printf("\n enter the num of value\n");
	int n;
	scanf_s("%d", &n);
	int arr[30];
	accept(arr,n);

	max(arr,n);

	return 0;
}