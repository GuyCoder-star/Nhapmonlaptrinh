/* Nhập vào 3 số thực a, b, c. Kiểm tra xem a, b, c có phải độ dài 3 cạnh
của tam giác hay không? */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    float a, b, c;
    bool kiem_tra;
    printf("nhap canh a: "); scanf("%f", &a);
    printf("nhap canh b: "); scanf("%f", &b);
    printf("nhap canh c: "); scanf("%f", &c);

    if ( (a > 0) && (b > 0) && (c > 0))
        if ((( a + b) > c) && (( a + c ) > b) && (( b + c > a )))
            kiem_tra = true;
    else 
        kiem_tra =false;

    if ( kiem_tra == true )
        printf("hop le");
    else
        printf("khong hop le");
    

    return 0;
}