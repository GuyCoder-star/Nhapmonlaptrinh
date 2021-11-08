/* nhập vào 2 số nguyên a, b.Xuất ra thương của chúng
    (trường hợp b = 0 thì xuất ra không chia được) */ 
    
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int a, b;
    float result;
    printf("nhap a: "); scanf("%d", &a);
    printf("nhap b: "); scanf("%d", &b);
    if (b != 0) {
        result = float(a) / b;
        printf("Thuong cua a va b la: %0.f", result);
    }
    else
        printf("Khong chia duoc");
    return 0;
}