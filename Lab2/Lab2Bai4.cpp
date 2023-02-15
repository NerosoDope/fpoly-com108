#include <stdio.h>

int main()
{
	float toan, ly, hoa, tbm;

	printf("Nhap diem toan: \n");
	scanf("%f", &toan);
	printf("Nhap diem ly: \n");
	scanf("%f", &ly);
	printf("Nhap diem hoa: \n");
	scanf("%f", &hoa);

	tbm = (toan * 3 + ly * 2 + hoa) / 6;

	printf("TBM la: %f", tbm);

	return 0;
}
