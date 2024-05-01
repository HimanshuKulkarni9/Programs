#include<stdio.h>
void count(int, int);

void count(int num, int key) {
	int count = 0;
	while (num != 0) {
		int k = num % 10;
		if (key == k) {
			count++;
		}
		num = num / 10;
	}
	printf("\n the key apper in number = %d", count);
}


int main() {

	int num, key;
	printf("\n enter the number\n");
	scanf_s("%d", &num);
	printf("\n enter the key\n");
	scanf_s("%d", &key);

	count(num, key);

	return 0;
}