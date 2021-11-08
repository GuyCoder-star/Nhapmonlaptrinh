/* nhập 3 số nguyên đôi một khác nhau, tìm giá trị nhỏ nhì */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int n = 3;
    int arr[n];
    int brr[] = {};
    for (int i = 0; i < n; i++) {
    printf("Nhap so nguyen thu %d: ", i + 1); scanf("%d", &arr[i]);
    }
    // buble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - i; j > i; j--) {
            if (arr[j] < arr[j-1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    printf("Gia tri nho thu 2 la: %d ", arr[1]);

    return 0;
}




