/* nhập vào 3 số nguyên a, b, c.Tìm nghiệm của phương trình ax^2+bx+c=0 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void giaiphuongtrinh(int a, int b, int c) {
    float delta;
    float x, x1, x2;
    if (a == 0) {
        if  (b == 0) {
            if (c == 0) {
                printf("phuong trinh co vo so ngiem");
            }
            else {
                printf("phuong trinh vo nghiem");
            }
        }
        else {
            float x;
            x = float(-c) / b;
            printf("phuong trinh co nghiem duy nhat %f: ", x);
        }
        
    }
    else { 
        delta = (b*b - 4*a*c);
        if (delta < 0) {
            printf("phuong trinh vo nghiem");
        }
        else if (delta == 0) {
            x = float(-b) / (2*a);           
            printf("phuong trinh co nghiem kep x = %f", x);
        }
        else {
            x1 = (-b - sqrt(delta)) / (2*a);
            x2 = (-b + sqrt(delta)) / (2*a);
            printf("phuonh trinh co 2 nghiem phan biet \n x1 = %f \n x2 = %f",x1, x2);
        }
    }
}  
int main() {
    int a, b, c;
    printf("nhap he so a: "); scanf("%d", &a);
    printf("nhap he so b: "); scanf("%d", &b);
    printf("nhap he so c: "); scanf("%d", &c);
    giaiphuongtrinh(a, b, c);
    return 0;
}  