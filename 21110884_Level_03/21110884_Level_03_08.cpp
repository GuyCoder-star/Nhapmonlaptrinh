/* Nhập một sô nguyên n.Xuất ra số ngược lại */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int pow(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++) {
        result = result * x;
    }
    return result;
}
int reverse_number(int n) {
    int re_num = 0;
    int count = 0;
    int arr[1000];
    
    while (n > 0) {
        int i;
        i = n % 10; 
        arr[count] = i;
        n = n / 10;
        count += 1;
    }
    for (int i = count - 1; i >= 0; i--) {
        int temp = arr[count - 1 - i] * pow(10, i);
        re_num = re_num + temp;
    }
    return re_num;
}
int main() {
    int n;
    printf("Nhap n: "); scanf("%d", &n);
    printf("So dao nguoc cua n la: %d", reverse_number(n));
    return 0;
}