#include <stdio.h>

int sum(int a);

int main()
{
    int num;

    printf("Enter the number: ");
    scanf_s("%d", &num);
    int result = sum(num);
    printf("Sum of digits in %d is %d\n", num, result);
    return 0;
}

int sum(int num)
{
    if (num != 0)
    {
       // return (num % 10 + sum(num / 10));
        int n = num % 10;
        int res = n + sum(num / 10);
        return res;
    }
    else
    {
        return 0;
    }
}