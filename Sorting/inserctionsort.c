#include<stdio.h>
int main() {

	int arr[5] = {5,4,3,1,9};
	int temp,small;
	for (int i = 0; i <= 4; i++) {
		small = i;
		for (int j = i + 1 ; j <= 4; j++) {
			if (arr[small] > arr[j]) {
				small = j;
			}
		}
			temp = arr[i];
			arr[i] = arr[small];
			arr[small] = temp;
	}
	for (int i = 0; i <= 4; i++) {
		printf("\n array after sorting %d", arr[i]);
	}
	return 0;
}