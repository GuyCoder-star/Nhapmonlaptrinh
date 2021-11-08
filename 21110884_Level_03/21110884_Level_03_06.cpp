/* Nhập số nguyên n.Đếm xem n có bao nhiêu ước số */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main () {
    int n, count;
    count  = 0;
    printf("Nhap so nguyen n: "); scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count += 1;
        }
    }
    printf("So uoc so cua so nguyen %d la : %d", n, count);
    return 0;
}