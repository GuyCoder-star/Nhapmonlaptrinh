/* Nhập vào số nguyên n.Xuất ra trị tuyệt đối của n */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int x;
    printf("nhap so nguyen x: ");
    scanf("%d", &x);
    if ( x < 0 )
        x = -x;
    printf("tri tuyet doi cua x la: %d", x);
    return 0;
}