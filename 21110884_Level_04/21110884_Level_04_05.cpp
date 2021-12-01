/* nhập một số nguyên dương n.Tìm chữ số lớn nhất của số n */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void input();
void output();
int max_in_num(int n);

int n, max;


int main() {
    input();
    max_in_num(n);
    output();
}
void input() {
    scanf("%d", &n); 
}

void output() {
    printf("%d", max_in_num(n));
}
int max_in_num(int n) {
    int i, max;
    max = 0;
    while(true) {
        i = n % 10;
        if (n == 0) {
            return max;
        }
        else {
            if (i == 9) {
                return 9; 
            }
            else {
                if (i > max) {
                    max = i;
                    n = n / 10;
                }
                else {
                    n = n / 10;
                }
            }
        }
    }
}