#include<stdio.h>
int main() {

	int mat[3][3] = { 1,2,3,4,5,6,7,8,9 };

	

	printf("\n Printing the pattern\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i < j) {
				printf(" ");
			}
			else {
				printf(" %d ", mat[i][j]);
			}
		}
		
		printf("\n");
	}


	return 0;
}