#include <math.h>
#include <stdio.h>

int main()
{
    int sum, digit1, digit2, digit3;

    printf("All Armstrong numbers between 1 and 1000 are:\n");
    for (int i = 1; i <= 1000; i++)  
    {
        int n = i;
        if (n <= 9)
        {
            printf("%d ", n);
        }
        else
        {
            digit1 = n % 10;   
            n /= 10;
            digit2 = n % 10;
            n /= 10;
            digit3 = n % 10;
            sum = (digit1 * digit1 * digit1) + (digit2 * digit2 * digit2) + (digit3 * digit3 * digit3);
   
            if (sum == i)
            {
                printf("%d ", sum);
            }
        }
    }
}