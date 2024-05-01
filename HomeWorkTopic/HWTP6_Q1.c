#include<stdio.h>
void divisible(int);

void divisible(int num) {

	if (num % 5 == 0) {
		printf("\n %d number is divisible by 5", num);
	}
	else {
		printf("\n %d num is not divisible by 5", num);
	}

}


int main() {

	int num;
	printf("\n enter the number");
	scanf_s("%d", &num);

	divisible(num);


	return 0;
}

