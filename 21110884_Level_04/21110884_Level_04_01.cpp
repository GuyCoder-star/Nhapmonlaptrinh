/* nhập vào số nguyên dương n.Kiểm tra xem n có phải số chính phương hay không? */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void input();
void output();

int n; 
int check = false;
int main() {
    input();
    for (int i = 1; i <= n / 2; i++) {
        if (n == i*i) {
            check = true;
        }
    }
    output();
    return 0;
}
void input() {
    printf("nhap so nguyen duong n: "); scanf("%d", &n);
}

void output() {
    if (check == true) {
        printf("%d la so chinh phuong", n);
    }
    else {
        printf("%d khong phai la so chinh phuong", n);
    }
}