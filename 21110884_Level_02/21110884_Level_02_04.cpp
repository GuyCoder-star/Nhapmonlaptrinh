/* nhập vào tháng năm cho biết tháng đó có bao nhiêu ngày */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

bool nhuan(int year) {
    return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 ==0));
}
int so_ngay(int month, int year) {
    switch (month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
        break;
    case 4: case 6: case 9: case 11:
        return 30;
        break;
    case 2:
        if (nhuan(year))
            return 29;
        else 
            return 28;
    default:
        return 0;
        break;
    }
}
int main() {
    int month, year;
    int day;
    printf("nhap thang: "); scanf("%d", &month);
    printf("nhap nam: "); scanf("%d", &year);
    day = so_ngay(month, year);
    printf("thang %d nam %d co %d ngay", month, year, day);
    return 0;
}