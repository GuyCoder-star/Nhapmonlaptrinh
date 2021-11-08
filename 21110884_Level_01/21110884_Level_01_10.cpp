/* Nhập vào một số thực a.Xuất ra số nguyên lớn nhất nhưng nhỏ hơn a */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() 
{
	float a;
	float d;
	int result;
	printf("Nhap so thuc a: ");
	scanf("%f", &a);

	d = a - int(a);
	if ((a >= 0) && (d != 0)) {
		result = int(a);	
		printf("So nguyen lon nhat nhung nho hon %f la %i", a,result);
	}
	else {
		result = int(a) - 1;
		printf("So nguyen lon nhat nhung nho hon %f la %i", a,result);
	}
	return 0;
}