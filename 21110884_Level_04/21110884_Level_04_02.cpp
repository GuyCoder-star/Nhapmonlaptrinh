/* nhập vào số nguyên dương n.Kiểm tra xem n có phải số nguyen tố hay không? */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void input();
void output();

int n;
bool check = true;

int main() {
    input();
    if (n == 2) {
        check = true;
    }
    else if (n > 2) {
        for (int i = 2; i < n / 2; i++) {
            if (n % i == 0) {
                check = false;
                break;
            }
        }
    }
    output();
}
void input() {
    printf("nhap so nguyen duong n: "); scanf("%d", &n);      
}


void output() {
    if (check == true) {
        printf("%d la so nguyen to", n);
    }
    else {
        printf("%d khong la so nguyen to", n);
    }
}