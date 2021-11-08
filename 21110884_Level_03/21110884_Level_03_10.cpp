/* Nhập 3 số nguyên a, b,n với a, b < n.Tìm tổng các số nguyên dương nhở hơn n
chia hết cho a nhưng không chia hết cho b là */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int a, b, n;
    int s = 0;
    printf("Nhap a: "); scanf("%d", &a);
    printf("Nhap b: "); scanf("%d", &b);
    printf("Nhap n: "); scanf("%d", &n);
    if (a < n && b < n) {
        for (int i = 1; i < n; i++) {
            if (i % a == 0 && i % b != 0) {
                s += i;
            }
        }
    }
    else {
        printf("gia tri nhap khong hop le");
    }
    printf("Tong: %d", s);

    return 0;
}