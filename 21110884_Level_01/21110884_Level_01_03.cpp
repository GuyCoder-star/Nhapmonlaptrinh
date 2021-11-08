/* Nhập vào chiều dài, chiều rộng của hình chữ nhật(số thực). 
Xuất ra chu vi của hinh chữ nhật(lấy hai chữ số lẻ)) */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    float d, r;
    printf("nhap chieu dai: "); scanf("%f", &d);
    printf("nhap chieu rong: "); scanf("%f", &r);
    printf("chu vi hinh chu nhat la: %.2f", ( ( d + r )*2 ));

    return 0;
}