/* nhập bộ ba số nguyên h, m, s.Kiểm tra xem bộ số h, m, s có lập
thành bộ giờ, phút, giây hợp lệ hay không? */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int h, m, s;
    bool kiem_tra;
    printf("nhap gio: "); scanf("%d", &h);
    printf("nhap phut: "); scanf("%d", &m);
    printf("nhap giay: "); scanf("%d", &s);
    
    if ( 0 <= h && h < 24) 
        if ( 0 <= m && m < 60 )
            if ( 0 <= s && s < 60 )
                kiem_tra = true;
    else 
        kiem_tra = false;
        
    if ( kiem_tra == true )
        printf("hop le");
    else 
        printf("khong hop le");

    return 0;
}