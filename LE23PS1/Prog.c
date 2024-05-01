#include<stdio.h>

void accept(int arr[], int n) {

	printf("\n enter the vales in arr\n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}

}

void prob_a(int arr[], int n) {
	int max = arr[0];
	for (int i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	printf("\n max value is = %d", max);

	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	printf("\n min value = %d", min);
}

void prob_b(int arr[], int n) {
	int new[100], n;
	for (int i = 0; i < n; i++) {
		new[i] = arr[i] * 5;
	}
	for (int i = 0; i < n; i++) {
		printf("\n new array = %d", new[i]);
	}
}