#include<stdio.h>
#include<stdlib.h>

int* accept(int);
float avg( int*,int);

int* accept(int num) {

	int* clerk = (int*)calloc(num,4);

	printf("\n enter the salary of clerk\n");
	for(int i=0; i<num; i++){
		scanf_s("%d", &clerk[i]);
	}
	return clerk;
}
float avg(int *clerk, int num) {
	int sum = 0;

	for (int i = 0; i < num; i++) {
		sum = sum + clerk[i];
	}

	float avg = (float)sum / num;

	return avg;

}



int main() {

	int b[12] = { 4,7,9,[3] = 12 ,17,23,32,[6] = 67,8,28 };

	for (int i = 0; i < 12; i++) {
		printf("%d\n", b[i]);
	}



	//for malloc
	/*
	int *p;
	p = (int*)malloc(24);

	printf("\n enter the values \n");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &p[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("\n %d", p[i]);
	}

	free(p);*/


	//for calloc
	/*
	int* p;
	p = (int*)calloc(5,sizeof(int));

	printf("\n enter the values \n");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &p[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("\n %d", p[i]);
	}

	free(p);
	*/

	//for realloc
	/*
	int* p;
	p = (int*)calloc(5, sizeof(int));

	printf("\n enter the values \n");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &p[i]);
	}

	for (int i = 0; i < 5; i++) {
		printf("\n %d", p[i]);
	}

	p = (int*)realloc((5 + 2), sizeof(int));

	printf("\n enter the values \n");
	for (int i = 0; i < 7;i++) {
		scanf_s("%d", &p[i]);
	}

	for (int i = 0; i < 7; i++) {
		printf("\n %d", p[i]);
	}

	free(p);
	*/

	// for avg calculation multifile
	/*
	int num;
	printf("\n enter no. of clerk\n");
	scanf_s("%d", &num);
	



	int* p = accept(num);

	float res = avg(p,num);

	printf("\n avg salary of clerk is %.2f", res);
	*/

	return 0;
}                            