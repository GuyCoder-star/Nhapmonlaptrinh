/* nhập vào số nguyên dương n.Kiểm tra xem n có phải số hoàn hảo hay không? */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void input();
void output();

int n;
bool check = false;     

int main() {
    input();
    int s = 1;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            s  += i;
        }
    }
    if (s == n) {
        check = true;
    }
    output();
}
void input() {
    printf("nhap so nguyen duong n: "); scanf("%d", &n);      
}


void output() {
   if (check == true) {
       printf("%d la so hoan hao", n);
   } 
   else {
       printf("%d khong la so hoan hao", n);

   }
}