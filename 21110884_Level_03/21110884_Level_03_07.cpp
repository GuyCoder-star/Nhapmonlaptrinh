/* Nhập số nguyên dương N.Tính tổng các chữ số của N */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int sum_of_digits(int n) {
    int sum = 0;
    while(n > 0) {
        int i;
        i = n % 10;
        sum += i;
        n = n / 10;
    }
    return sum;
}
int main() {
    int n;
    printf("Nhap so nguyen duong n: "); scanf("%d", &n);
    printf("Tong cac chu so cua n la: %d ", sum_of_digits(n));
    return 0;
}