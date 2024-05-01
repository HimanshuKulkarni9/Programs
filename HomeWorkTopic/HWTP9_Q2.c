#include<stdio.h>
void accept(int[], int);
void reverse(int[], int);

void accept(int arr[], int n) {
	printf("\n enter the values in arr\n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

}

void reverse(int arr[], int n) {
	int temp; 
	for (int i = 0; i <= n/2; i++) {
		temp = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = temp;
	}
	printf("\n printing reverse of array");
	for (int i = 0; i < n; i++) {
		printf("%d", arr[i]);
	}
}

int main() {

	printf("\n enter the num of value\n");
	int n;
	scanf_s("%d", &n);
	int arr[30];
	accept(arr, n);

	reverse(arr, n);

	return 0;
}