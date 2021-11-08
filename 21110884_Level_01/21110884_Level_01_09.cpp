/* Nhập vào một số thực.Làm tròn số thực theo nguyên tắc
làm tròn thông thường (phần lẻ >= 0.5 thì làm tròn lên) */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    float x;
    float d;
    int result;
    printf("nhap vao mot so thuc x: "); scanf("%f", &x);
    d =  x - int(x);
    if (d==0) 
        result = x;
    else if ( d > 0)
        result = int(x + 0.5);
    else
        result = int(x - 0.5);
    printf("ket qua sau khi lam tron la: %d", result);
    return 0;
}
 