/* nhập vào giờ, phút, giây.Cho biết sau đó 1 giây là mấy giờ, mấy phút, mấy giây? */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void time(int h, int m, int s) {
	if (h >= 0 and h < 24) {
		if (m >=0  and m < 60) {
			if (s >=0  and s < 60) {
				printf("Thoi gian vua nhap la: %d gio %d phut %d giay \n ", h, m, s);
				printf("-----------------------------------------------------------\n");
			}
		}
	}
	s += 1;
	if (s == 60) {
		s = 0;
		m += 1;
		if (m == 60) {
			m = 0;
			h += 1;
			if (h == 24) {
				h = 0;
			}
		}
	}
	printf("Sau do mot giay thi thoi gian la:  %d gio %d phut %d giay", h, m, s);
}	

int main() {
	int h, m, s;
	printf("Nhap gio: "); scanf("%d", &h);
	printf("Nhap phut: "); scanf("%d", &m);
	printf("Nhap giay: "); scanf("%d", &s);
	time(h, m, s);
	return 0;
}