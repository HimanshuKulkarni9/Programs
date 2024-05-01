#include<stdio.h>
int main() {

	int num;
	printf("\n enter the number\n");
	scanf_s("%d", &num);

	int ori = num;

	int n1 = num % 10;
	num /= 10;
	int n2 = num % 10;
	num /= 10;
	int n3 = num % 10;

	printf("\n orignal value = %d \n reverse value = %d%d%d", ori, n1, n2, n3);

}