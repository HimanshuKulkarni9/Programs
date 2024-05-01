#include<stdio.h>
int main() {

	int mat[3][3];

	printf("\n enter th values\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &mat[i][j]);
		}
		printf("\n");
	}

	printf("\n Printing the pattern\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if(i==j){
				printf(" %d ", mat[i][j]);
			}
			else {
				printf(" ");
			}

		}
		printf("\n");
	}


	return 0;
}