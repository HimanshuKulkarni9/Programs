#include<stdio.h>
main() {
    int  a, b, c;
   
    for ( int a = 1; a <= 100; a++) {
        for (b = a; b <= 100; b++) {
            for (c = b; c <= 100; c++) {
                if (c * c == a * a + b * b) {
                    printf("%d , %d , %d\n", a, b, c);
                }
            }
        }
    }
}