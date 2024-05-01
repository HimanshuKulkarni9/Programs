#include<stdio.h>
int main() {

	int salary, sales;
	printf("\n enter the basic salary and sales amount");
	scanf_s("%d %d", &salary, &sales);
	int com;

	if (sales >= 5000 || sales <= 7500) {
		com = 3;
		if (sales >= 7501 || sales <= 10500) {
			com = 8;

			if (sales >= 10501 || sales <= 15000) {
				com = 11;

				if (sales > 15000) {
					com = 15;
				}
			}
		}
	}

	int commErned = (sales * com / 100);
	int netsalary = (salary + commErned);

	printf("\n netsalary %d", netsalary);
	printf("\n commision earned %d", commErned);

	return 0;
}