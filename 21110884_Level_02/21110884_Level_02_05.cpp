/* nhập vào 4 số thực a, b, c, d.Tìm số có giá trị lớn nhất */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

double Max(double numbers[4]) {
    double Max;
    Max = numbers[0];
    for (int i = 1; i < 4 ; i++)
        if (Max >= numbers[i])
            continue;
        else 
            Max = numbers[i];
    return Max;
}
int main() {
    double numbers[] = {} ;
    printf("nhap a: "); scanf("%lf", &numbers[0]);
    printf("nhap b: "); scanf("%lf", &numbers[1]);
    printf("nhap c: "); scanf("%lf", &numbers[2]);
    printf("nhap d: "); scanf("%lf", &numbers[3]);
    printf("Max = %lf", Max(numbers));
    return 0;
}