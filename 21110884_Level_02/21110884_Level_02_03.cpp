/* nhập vào 3 số nguyên a, b, c.Tìm số có giá trị nhỏ nhất */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int a, b, c;
    int min;
    printf("nhap a: "); scanf("%d", &a);
    printf("nhap b: "); scanf("%d", &b);
    printf("nhap c: "); scanf("%d", &c);
    min = a;
    if (min > b) {
        min = b;
        if (min > c)
            min = c;
    }
    else {
        if (min > c)
            min = c;
    }
    printf("gia tri nho nhat trong 3 so %d, %d, %d la min = %d", a, b, c, min);
    return 0;
}