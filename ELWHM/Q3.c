#include<stdio.h>
void add(int, int);

void add(int u, int l) {
	int sum = 0;
	for (int i = u; i <= l; i++) {
		if (i % 2 == 0) {
			 sum = sum + i;
		}
	}
	printf("\n sum of all even number in given range is = %d", sum);
}

int main() {

	printf("\n enter the lower limit\n");
	int l;
	scanf_s("%d", &l);
	printf("\n enter the upper limit\n");
	int u;
	scanf_s("%d", &u);

	add(l, u);

	return 0;
}