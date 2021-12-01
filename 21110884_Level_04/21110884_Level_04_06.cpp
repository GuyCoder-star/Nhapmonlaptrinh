/* nhập một số nguyên dương n. Cho biết n có bao nhiêu chữ số nguyên tố */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void input();
void output();
int dem(int n);

int n, count;

int main() {
    input();
    dem(n);
    output();
}
void input() {
    scanf("%d", &n);
}

void output() {
    printf("%d", count);
}
int dem(int n) {
    int i;
    count = 0;
    while(true) {
        if (n == 0) {
            return count;
        }
        else {
            i = n % 10;
            n = n / 10;
            if (i == 2 || i == 3 || i == 5 || i == 7) {
                count += 1;
            }
        }
    }
}