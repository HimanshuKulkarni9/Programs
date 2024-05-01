#include<stdio.h>

int power(int, int, int*);


int power(int b, int i, int* res) {

	for (int j = 1; j <= i; j++) {

		*res = *res * b;
		if (*res < 0)
			break;

	}

	if (*res < 0) {
		return 0;
	}
	else
	{
		return 1;
	}

}



int main() {
	int base, index;
	int result = 1;

	printf("\n enter the value of base and index");
	scanf_s("%d %d", &base, &index);

	int temp = power(base, index, &result);

	printf("\n power of %d", result);
	if (temp == 0) {
		printf("\n overflow");
	}
	else {
		printf("\n %d", result);
	}
	return 0;
}
