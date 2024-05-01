#include<stdio.h>
void accept(int[][3]);
void subtraction(int[][3], int[][3], int[][3]);

void accept(int mat[][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &mat[i][j]);
		}
		printf("\n");
	}
}

void subtraction(int mat1[][3], int mat2[][3], int mat3[][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mat3[i][j] = mat1[i][j] - mat2[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", mat3[i][j]);
		}
		printf("\n");
	}


}



int main() {

	int mat1[3][3], mat2[3][3], mat3[3][3];

	printf("\n enter the value in 1st matrix\n");
	accept(mat1);
	printf("\n enter the value in 2nd matrix\n");
	accept(mat2);

	subtraction(mat1, mat2, mat3);

	return 0;
}