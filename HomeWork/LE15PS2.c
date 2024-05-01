#include<stdio.h>  
void fabonaci(int,int,int);

void fabonaci(int n1,int n2,int num){
	int n3;
	for (int i = 2; i < num; ++i)
	{
		n3 = n1 + n2;
		printf(" %d", n3);
		n1 = n2;
		n2 = n3;
	}
}

int main()
{
	int n1 = 0, n2 = 1, num;
	printf("Enter the number of elements:");
	scanf_s("%d", &num);
	printf("\n%d %d", n1, n2);   

	fabonaci(n1, n2, num);
	
	return 0;
}