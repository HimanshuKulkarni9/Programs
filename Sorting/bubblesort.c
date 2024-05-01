#include<stdio.h>
int main() {
	
	int arr[5] = { 5,4,3,2,1 };
	int temp;
	printf("before sorting\n");
	for (int i = 0; i <= 4; i++) {
			printf("%d\n",arr[i]);
	}

	for(int i=0;i<=4;i++){
		for (int j = 0; j <= 3; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	printf("\n after sorting\n");
	for (int i = 0; i <= 4; i++) {
		printf("%d\n", arr[i]);
	}
	
		return 0;
}