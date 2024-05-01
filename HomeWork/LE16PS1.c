#include<stdio.h>
void prime(int);
int check(int);

int check(int num) {
	if (num < 0) {
		return 1;
	}
	else {
		return 0;
	}
}

void prime(int num) {
	int temp = 0;
	int m = num / 2;

	for (int i = 2; i <= m; i++) {
		if (num % i == 0) {
			printf("\n %d number is not prime", num);
			temp = 1;
		}

	}
	if (temp == 0) {
		printf("\n %d number is prime", num);
	}

}



int main(){
int num;
printf("\n enter the value to check is prime or not");
scanf_s("%d", &num);

int c = check(num);
if (c == 1) {
	do {
		printf("\n enter positive number");
	} while (c != 1);
}
else {
	prime(num);
}

return 0;
}