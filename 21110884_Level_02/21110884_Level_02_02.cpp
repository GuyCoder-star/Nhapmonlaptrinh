/* nhập vào 2 số nguyên a, b. Giải phương trình ax + b = 0 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int a, b;
    float x;
    printf("Nhap he so a: "); scanf("%d", &a);
    printf("Nhap he so b: "); scanf("%d", &b);
    if (a == 0) {
        if (b == 0) 
            printf("Phuong trinh co vo so nghiem");
        else
            printf("Phuong trinh vo nghiem");
    }
    else {
        x = float(-b) / a;
        printf("Phuong trinh co nghiem x = %0.2f", x);
    }

    return 0;
}