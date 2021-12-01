/* Nhập vào một sô n. Kiểm tra các chữ số n có tăng dần hay không? */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void input();
void output();
bool handle(int n);

int n;

int main() {
    input();
    output();
}
void input() {
    scanf("%d", &n);
}

void output() {
    if(handle(n)) {
        printf("1");
    }
    else {
        printf("0");
    }
}
bool handle(int n) {
    int i, temp;
    while(true) {
        if (n == 0) {
            return true;
        }
        else {
            i = n % 10;
            n = n / 10;
            temp = n % 10;
            if (i <= temp) {
                return false;
            } 
        }
    }
}
