/* Tìm ước chung lớn nhất của 2 số nguyên dương a, b nhập từ bàn phím */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int GCD(int a, int b) {
    int GCD = 1;
    int max = a;
    
    if(a < b) {
        max = b;
    }

   for (int i = 1; i <= max; i++) {
        if(a % i == 0 && b % i == 0) {
            GCD  = i;
        }
    }
    return GCD;
}
int main() {
    int a, b;
    printf("Nhap a: "); scanf("%d", &a);
    printf("Nhap b: "); scanf("%d", &b);
    printf("Uoc chung lon nhat cua %d va %d la: %d", a, b, GCD(a, b));
    return 0;
}