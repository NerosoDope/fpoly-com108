#include <stdio.h>

int main()
{
	int dai, rong;
	int S = 0, C = 0;

	printf("Nhap chieu dai hcn: \n");
	scanf("%d", &dai);
	printf("Nhap chieu rong hcn: \n");
	scanf("%d", &rong);

	S = dai * rong;
	C = (dai + rong) * 2;

	printf("Chu vi hcn la: %d - Dien tich hcn la: %d", C, S);
	return 0;
}
