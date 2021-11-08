/* nhập vào 3 số thực a, b, c.Kiểm tra xem 3 số đó phải là 3 cạnh của tam giác hay không
nếu có thì cho biết tam giác đó là tam giác gì (đều, vuông, vuông cân, cân, thường) */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void check_triangle(double a, double b, double c) {
    // kiểm tra có phải tam giác
    bool triangle;
    if ((a > 0) && (b > 0) && (c > 0))
        if (a + b > c)
            if (a + c > b)
                if (b + c > a)
                    triangle = true;
    else
        triangle = false;
    // kiểm tra loại tam giác
    if (triangle ==  true) {
        double cos_of_a, cos_of_b, cos_of_c;
        cos_of_a = (b*b + c*c - a*a) / (2*b*c); 
        cos_of_b = (a*a + c*c - b*b) / (2*a*c); 
        cos_of_c = (a*a + b*b - c*c) / (2*a*b); 
        if (a == b || a == c || b == c) {
            if (a == b && b == c)
                printf("tam giac deu");
            else if ( a == b && b != c || a == c && c != b || b == c && c != a) {
                if (cos_of_a == 0 || cos_of_b == 0 || cos_of_c == 0)
                    printf("tam giac vuong can");
                else if (cos_of_a != 0 || cos_of_b != 0 || cos_of_c != 0)
                    printf("tam giac can");
            }
        }
        else if (cos_of_a == 0 || cos_of_b == 0 || cos_of_c == 0)
            printf("tam giac vuong");
        else
            printf("tam giac thuong");
    }   
    else 
        printf("ba so nhap khong phai 3 cach cua tam giac");
}
int main() {
    double a, b, c;
    printf("nhap a: "); scanf("%lf", &a);
    printf("nhap b: "); scanf("%lf", &b);
    printf("nhap c: "); scanf("%lf", &c);
    printf("%lf %lf %lf \n", a, b, c);
    check_triangle(a, b, c);
    return 0;
}
