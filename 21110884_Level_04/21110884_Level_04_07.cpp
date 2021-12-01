/* nhập một số nguyên dương n.Kiểm tra xem các chữ số n có phải gồm toàn chũ số số chẵn hay không? */\

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void input();
void output();
bool even(int n);

int n;
bool check;


int main() {
    input();
    check = even(n);
    output();
}
void input() {
    scanf("%d", &n);
}

void output() {
    if(check == true) {
        printf("%d gom toan cac chu so chan", n);
    }
    else {
        printf("%d khong gom toan cac chu so chan", n);
    }
}
bool even(int n) {
    int i;
    while(true) {
        if(n == 0) {
            return true;
        }
        else {
            i = n % 10;
            n = n / 10;
            if (i % 2 != 0) {
                return false;
            }
        }
    }
}