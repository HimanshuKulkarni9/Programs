#include<stdio.h>
void accept(int[][2]);
void addition(int[][2]);

void accept(int mat[][2]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			scanf_s("%d", &mat[i][j]);
		}
		printf("\n");
	}
}

void addition(int mat1[][2]) {
	float avg; int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if (j == 2) {
				 sum = sum + mat1[i][j];
			}
		}
	}

	avg = sum / 3;

	printf(" avg is = %f", avg);


}



int main() {

	int mat[3][2];

	printf("\n enter the value in 1st matrix\n");
	accept(mat);

	addition(mat,3,2);

	return 0;
}