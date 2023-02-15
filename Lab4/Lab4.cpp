#include <stdio.h>
#include <math.h>

// Bai 1
void Lab4Bai1(float tong = 0, float bienDem = 0, float trungBinh = 0)
{
	int min, max;
	int i;
	printf("Nhap gia tri min: ");
	scanf("%d", &min);
	printf("Nhap gia tri max: ");
	scanf("%d", &max);

	while (i <= max)
	{
		if (i % 2 == 0)
		{
			tong += i;
			bienDem++;
		}
		i++;
	}
	trungBinh = tong / bienDem;
	printf("Trung binh tong cac so chia het cho 2: %.2f", trungBinh);
}

// Bai 2
void Lab4Bai2()
{
	int bienDem = 0;
	int i, x;
	printf("Nhap so x: ");
	scanf("%d", &x);
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			bienDem++;
		}
	}
	if (bienDem == 0)
	{
		printf("%d la so nguyen to", x);
	}
	else
		printf("%d khong phai la so nguyen to", x);
}

// Bai 3
void Lab4Bai3()
{
	int bienDem = 0;
	int i, x;
	printf("Nhap so x: ");
	scanf("%d", &x);
	for (i = 1; i < x; i++)
	{
		if (i * i == x)
		{
			printf("%d la so chinh phuong", x);
		}
		else
			printf("%d khong phai la so chinh phuong", x);
	}
}

// Bai 4
int main()
{
	float tong, bienDem, trungBinh;
	int choose;
	do
	{
		printf("\n");
		printf("----- MENU -----\n");
		printf("1. Tinh trung binh tong cua cac so tu nhien chia het cho 2\n");
		printf("2. Chuong trinh xac dinh so nguyen to\n");
		printf("3. Chuong trinh so chinh phuong\n");
		printf("0. Thoat\n");
		printf("Moi chon chuc nang: ");
		scanf("%d", &choose);

		switch (choose)
		{
		case 1:
			printf("Tinh trung binh tong cua cac so tu nhien chia het cho 2\n");
			Lab4Bai1();
			break;
		case 2:
			printf("Chuong trinh xac dinh so nguyen to\n");
			Lab4Bai2();
			break;
		case 3:
			printf("Chuong trinh so chinh phuong\n");
			Lab4Bai3();
			break;
		case 0:
			break;
		default:
			printf("Ban chua chon dung chuc nang, vui long chon lai");
		}
		return 0;
	} while (choose != 0);
}