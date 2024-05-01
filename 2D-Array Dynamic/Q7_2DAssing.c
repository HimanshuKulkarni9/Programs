#include<stdio.h>
int main() {

	int mat[3][3] = { 1,2,3,4,5,6,7,8,9 };



	printf("\n Printing the pattern\n");
	for (int i = 0; i < 3; i++) {
		int sum = 0;
	for (int j = 0; j < 3; j++) {
			sum = sum + mat[i][j];
			
		}

		printf("\n %d \n",sum);
	}


	return 0;
}