/* Nhập hai số nguyên a, b.Xuất ra số lớn nhất */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int a, b;
    printf("nhap so nguyen a "); scanf("%d", &a);
    printf("nhap so nguyen b "); scanf("%d", &b);
    if ( a >= b)
        printf ("MAX = %d", a);
    else 
        printf("MAX  = %d", b);

    return 0;
}
