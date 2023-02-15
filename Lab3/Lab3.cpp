#include <stdio.h>
#include <math.h>

void Lab3Bai21()
{
	float a, b;
	printf("\n");
	printf("Tinh phuong trinh bac 1\n");
	printf("Nhap so a: ");
	scanf("%f", &a);
	printf("Nhap so b: ");
	scanf("%f", &b);

	if (a == 0)
	{
		if (b == 0)
		{
			printf("Chuong trinh co vo so nghiem");
		}
		else
		{
			printf("Chuong trinh vo nghiem");
		}
	}
	else
		printf("Chuong trinh co nghiem la: %.2f", -b / a);
}

int gpt(float a, float b, float c, float &x1, float &x2)
{
	float delta = b * b - 4 * a * c;

	if (delta < 0)
	{
		x1 = x2 = 0.0;
		return 0;
	}
	else if (delta == 0)
	{
		x1 = x2 = -b / (2 * a);
		return 1;
	}
	else
	{
		delta = sqrt(delta);
		x1 = (-b + delta) / (2 * a);
		x2 = (-b - delta) / (2 * a);
		return 2;
	}
}
void Lab3Bai22()
{
	float a, b, c;
	float x1, x2;
	printf("\n");
	printf("Tinh phuong trinh bac 2\n");
	do
	{
		printf("Nhap a (a khac 0): ");
		scanf("%f", &a);
	} while (a == 0);
	printf("Nhap b: ");
	scanf("%f", &b);
	printf("Nhap c: ");
	scanf("%f", &c);

	int numNo = gpt(a, b, c, x1, x2);

	if (numNo == 0)
	{
		printf("Phuong trinh vo nghiem");
	}
	else if (numNo == 1)
	{
		printf("Phuong trinh co nghiem kep x= %f", x1);
	}
	else
	{
		printf("Phuong trinh co 2 nghiem phan biet: \n");
		printf("x1= %f \n", x1);
		printf("x2= %f", x2);
	}
}

void Lab3Bai3()
{
	double sodien, sotien;
	printf("\n");
	printf("Chuong trinh tinh tien dien \n");
	printf("Nhap chi so dien tieu thu: ");
	scanf("%lf", &sodien);
	if (sodien <= 50)
	{
		sotien = sodien * 1678;
		printf("So tien phai tra: %lf", sotien);
	}
	else if (sodien <= 100)
	{
		sotien = 50 * 1678 + (sodien - 50) * 1734;
		printf("So tien phai tra: %lf", sotien);
	}
	else if (sodien <= 200)
	{
		sotien = 50 * 1678 + 50 * 1734 + (sodien - 100) * 2014;
		printf("So tien phai tra: %lf", sotien);
	}
	else if (sodien <= 300)
	{
		sotien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (sodien - 300) * 2536;
		printf("So tien phai tra: %lf", sotien);
	}
	else if (sodien <= 400)
	{
		sotien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (sodien - 400) * 2834;
		printf("So tien phai tra: %lf", sotien);
	}
	else
	{
		sotien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (sodien - 400) * 2834;
		printf("So tien phai tra: %lf", sotien);
	}
}

int main()
{
	printf("----- MENU -----\n");
	printf("1. Giai phuong trinh bac 1\n");
	printf("2. Giai phuong trinh bac 2\n");
	printf("3. Tinh tien dien\n");

	printf("Moi ban chon chuc nang: ");
	int chon;
	scanf("%d", &chon);
	switch (chon)
	{
	case 1:
		Lab3Bai21();
		break;
	case 2:
		Lab3Bai22();
		break;
	case 3:
		Lab3Bai3();
		break;
	default:
		printf("Ban chua chon chuc nang");
	}
	return 0;
}
