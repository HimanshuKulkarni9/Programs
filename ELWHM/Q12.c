#include<stdio.h>

int main() {
	int num;
	printf("\n enter the factorial num\n");
	scanf_s("%d", &num);


		int fact = 1;
		//int temp;		
		for (int i = 1; i < num; i++) {
			
			fact = fact * i;
		
			if (fact > num) {
				printf("\n given number is not factorial");
				break;
			}
			else if (fact == num) {
				printf("\n given number = %d is factorial of %d", num, i);
				break;
			}
		}
	
	return 0;
}