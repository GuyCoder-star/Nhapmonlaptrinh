/* Nhập một chữ cái.Nếu là chữ thường thì đổi sang hoa và ngược lại */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    char kitu;
    printf("nhap ki tu: "); scanf("%c", &kitu);
    printf("ki tu ban vua nhap la %c \n", kitu);
    if ((kitu >= 65) && (kitu <=  90)) {
        kitu += 32;
        printf("ki tu chuyen sang chu thuong la: %c", kitu);
    }
    if ((kitu >= 97) && (kitu <= 122)){
        kitu -= 32;
        printf("ki tu chuyen sang chu hoa la: %c", kitu);
    }
    return 0;
}