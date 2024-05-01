#include<stdio.h>
#include<math.h>
int main() {
	/*
	int num;
	printf("\n  enter number");
	scanf_s("%d", &num);

	int origNum = num;
	int orignal = num;
	int count = 0;
	int n1,rev=0;

	for (; num != 0; num /= 10) {
		count++;
	}
	for (int i = 1; i <= count; i++) {
		n1 = (origNum % 10);
		origNum /= 10;
		printf(" %d ", n1);

		rev = rev * 10 + n1;

		

	}

		printf(" %d ",rev);

		if (orignal == rev)
			printf("\n palindrom");
			*/
	/*
	int num;

	printf("\n enter the value\n");
	scanf_s("%d", &num);
	int count = 0,temp=num;
	for (; num != 0; num /= 10) {
		count++;
	}
	printf("%d\n", count);
	num = temp;
	
	// palindrome
	
	int onum = num, rev = 0 ,n1;
	
	for (int i = 1; i <= count; i++) {
		n1 = onum % 10;
		rev = rev * 10 + n1;
		onum /= 10;
		
	}
	printf("%d\n", rev);
	
	if (num == rev) {
		printf("%d num is palindrom %d = %d ", num, num, rev);
	}
	*/
	/*
	int num;
	printf(" enter number\n");
	scanf_s("%d", &num);
	int count=0, temp = num;
	while (num != 0) {
		num = num / 10;
		count++;
	}
	printf("%d\n", count);
	num = temp;
	int ori = num;
	int  sum = 0,res=1;
	while (ori!=0) {
		int n = ori % 10;
		
		sum = sum + pow(n, count);
	ori /= 10;

	for (int j = 1; j <= count; j++) {
		res = res + n;
		continue;

	}

	}
	
	printf("%d\n", res);
	if (num == sum) {
		printf("%d is armstrng", num);
	}
	*/


	




		return 0;
	}
