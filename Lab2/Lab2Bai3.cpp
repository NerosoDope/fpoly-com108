#include <stdio.h>

int main()
{
	float R, C, S;

	printf("Nhap ban kinh hinh tron: \n");
	scanf("%f", &R);

	S = 3.14 * R * R;
	C = 2 * 3.14 * R;

	printf("Chu vi hinh tron: %f - Dien tich hinh tron: &f", S, C);
	return 0;
}
