/* Tìm ước chung lớn nhất của 2 số nguyên dương a, b nhập từ bàn phím */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int min(int a, int b) {
    if (a > b) {
        return b;
    }
    return a;
}

int GCD(int a, int b) {
    for (int i = min(a, b); i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }   
}
int main() {
    int a, b;
    printf("Nhap a: "); scanf("%d", &a);
    printf("Nhap b: "); scanf("%d", &b);
    printf("Uoc chung lon nhat cua %d va %d la: %d", a, b, GCD(a, b));
    return 0;
}