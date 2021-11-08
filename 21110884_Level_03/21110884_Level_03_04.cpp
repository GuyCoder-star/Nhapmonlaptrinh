/* Nhập số nguyên dương n.Tính S = 1 * 2 * ... * n = n! */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void factorial(int n) {
    int S = 1;
    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            S *= i;
        }
       printf("S = %d", S);
    }
    else {
        printf("Gia tri n nhap khong hop le");
    }
}
int main() {
    int n;
    printf("Nhap so nguyen duong n: "); scanf("%d", &n);
    factorial(n);
    return 0;
}