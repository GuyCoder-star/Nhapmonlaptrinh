/* Nhập số nguyên dương n.Tính S = 1 + 1/2 + ... + 1/n */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int Sum(int n) {
    int S = 0;
    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            S += 1 / i;
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
    Sum(n);
    return 0;
}