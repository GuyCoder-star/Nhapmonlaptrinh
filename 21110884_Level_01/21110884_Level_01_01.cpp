/* nhập vào hai số nguyên a, b.Tính tổng hai số nguyên vừa nhập */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() { 
    int a, b;
    printf("nhap so nguyen a: "); scanf("%d", &a);
    printf("nhap so nguyen b: "); scanf("%d", &b);
    printf("tong cua hai so nguyen a, b la: %d", ( a + b ));
    
    return 0;
}