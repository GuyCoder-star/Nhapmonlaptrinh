/* Nhập số nguyên n.Tìm tổng các ước số của n */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int Sum(int n) {
    int S = 0;
    if (n == 0 ) {
        printf("Vo han");
    }
    else if (n > 0) {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                S += i;
            }
        }
        printf("Tong cac uoc so cua %d la = %d", n, S);
    }
    else {
        printf("Gia tri n nhap khong hop le");
        return -1;
    }
}
int main() {
    int n;
    printf("Nhap so nguyen duong n: "); scanf("%d", &n);
    Sum(n);
    return 0;
}
