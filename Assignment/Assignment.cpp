#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

// Bai 1
void Bai1()
{
	float x;
	printf("Moi nhap so nguyen: ");
	scanf("%f", &x);

	if (x == (int)x)
	{
		printf("%.2f la so nguyen\n", x);
	}
	else
		printf("%.2f khong phai la so nguyen\n", x);

	if (x > 1 && x == (int)x)
	{
		int check = 1;
		for (int i = 2; i <= sqrt(x); i++)
		{
			if ((int)x % i == 0)
			{
				check = 0;
				break;
			}
		}

		if (check == 1)
		{
			printf("%.2f la so nguyen to\n", x);
		}
		else
			printf("%.2f khong phai la so nguyen to\n", x);
	}

	if (x > 1 && x == (int)x && sqrt(x) == (int)sqrt(x))
	{
		printf("%.2f la so chinh phuong\n", x);
	}
	else
		printf("%.2f khong phai la so chinh phuong\n", x);
}

// Bai 2
void UCLN(int a, int b, int *ucln)
{
	while (a * b != 0)
	{
		if (a > b)
		{
			a %= b;
		}
		else
		{
			b %= a;
		}
	}
	*ucln = a + b;
}

void Bai2()
{
	int a, b;
	int ucln, bcnn;
	
	do
	{
		printf("Nhap so a: ");
		scanf("%d", &a);
		printf("Nhap so b: ");
		scanf("%d", &b);
	} while ((int)a != a && (int)b != b);

	UCLN(a, b, &ucln);
	printf("UCLN la: %d\n", ucln);
	bcnn = (a * b) / ucln;
	printf("BCNN la: %d\n", bcnn);
}

// Bai 3
void Bai3()
{
	int start, end, time;
	double tienThanhToan;
	int gioThem;
	double tienThem;

	printf("Nhap gio bat dau: ");
	scanf("%d", &start);
	printf("Nhap gio ket thuc: ");
	scanf("%d", &end);

	time = end - start;

	if (time <= 3)
	{
		tienThanhToan = time * 150000;
	}
	else
	{
		gioThem = time - 3;
		tienThem = gioThem * 150000 * 0.7;
		tienThanhToan = 3 * 150000 + tienThem;
	}

	if (start >= 14 && start <= 17)
	{
		tienThanhToan = tienThanhToan * 0.9;
	}

	printf("So tien can thanh toan: %.2lf", tienThanhToan);
}

// Bai 4
void Bai4()
{
	double sodien, sotien;
	printf("Nhap chi so dien tieu thu: ");
	scanf("%lf", &sodien);

	if (sodien <= 50)
	{
		sotien = sodien * 1678;
	}
	else if (sodien <= 100)
	{
		sotien = 50 * 1678 + (sodien - 50) * 1734;
	}
	else if (sodien <= 200)
	{
		sotien = 50 * 1678 + 50 * 1734 + (sodien - 100) * 2014;
	}
	else if (sodien <= 300)
	{
		sotien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (sodien - 200) * 2536;
	}
	else if (sodien <= 400)
	{
		sotien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (sodien - 300) * 2834;
	}
	else
	{
		sotien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (sodien - 400) * 2834;
	}

	printf("So tien phai tra: %.2lf\n", sotien);
}

// Bai 5
void Bai5()
{
	int menhGia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
	int soTien;
	int soToTien;

	printf("Nhap so tien can doi: ");
	scanf("%d", &soTien);

	while (soTien)
	{
		printf("So tien sau khi doi:\n");
		for (int i = 0; i < 9; i++)
		{
			soToTien = soTien / menhGia[i];
			if (soToTien != 0)
			{
				printf("+ %d to %d\n", soToTien, menhGia[i]);
			}
			soTien = soTien - soToTien * menhGia[i];
		}
	}
}

// Bai 6
void Bai6()
{
	double tienVay, tongTien;
	printf("Nhap so tien can vay: ");
	scanf("%lf", &tienVay);

	int term = 12;
	double rate = 0.05;
	double tienGocHangThang = tienVay / term;

	for (int i = 1; i <= term; i++)
	{
		double tienLaiHangThang = tienVay * rate;
		double tongTienHangThang = tienLaiHangThang + tienGocHangThang;
		tongTien += tongTienHangThang;
		tienVay = tienVay - tienGocHangThang;

		printf("So tien can tra trong thang %d:\n", i);
		printf("Tien lai hang thang: %.0lf\n", tienLaiHangThang);
		printf("Tien goc hang thang: %.0lf\n", tienGocHangThang);
		printf("Tong tien hang thang: %.0lf\n", tongTienHangThang);
		printf("Tien vay chua tra: %.0lf\n", tienVay);
		printf("\n");
	}

	printf("Tong tien phai tra sau 12 thang: %.2lf vnd\n", tongTien);
}

// Bai 7
void Bai7()
{
	double phanTramVay, tongTien;
	printf("Nhap so phan tram vay: ");
	scanf("%lf", &phanTramVay);

	if (phanTramVay > 100)
	{
		printf("So ban nhap khong hop le. Vui long nhap lai.\n");
		printf("Nhap so phan tram vay: ");
		scanf("%lf", &phanTramVay);
	}

	double phanTramTraTruoc = 100 - phanTramVay;
	double soTienVay = 500000000;
	int term = 24;
	double rate = 0.072;
	double soTienTraTruoc = soTienVay * (phanTramTraTruoc / 100);
	double tienVay = soTienVay - soTienTraTruoc;
	double tienGocHangNam = tienVay / term;

	printf("So tien tra truoc: %.0lf\n", soTienTraTruoc);

	for (int i = 1; i <= term; i++)
	{
		double tienLaiHangNam = tienVay * rate;
		double tongTienHangNam = tienLaiHangNam + tienGocHangNam;
		tongTien += tongTienHangNam;
		tienVay = tienVay - tienGocHangNam;

		printf("So tien can tra trong nam %d:\n", i);
		printf("Tien lai hang nam: %.0lf\n", tienLaiHangNam);
		printf("Tien goc hang nam: %.0lf\n", tienGocHangNam);
		printf("Tong tien hang nam: %.0lf\n", tongTienHangNam);
		printf("Tien vay chua tra: %.0lf\n", tienVay);
		printf("\n");
	}

	printf("Tong tien phai tra sau 24 nam: %.2lf vnd\n", tongTien);
}

// Bai 8
struct SinhVien
{
	char hoTen[50];
	float diemTB;
};

void Bai8()
{
	struct SinhVien dsSV[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("Nhap ho ten sinh vien thu %d: ", i + 1);
		fflush(stdin);
		gets(dsSV[i].hoTen);
		printf("Nhap diem TB sv thu %d: ", i + 1);
		scanf("%f", &dsSV[i].diemTB);
		getchar;
	}

	int j;
	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (dsSV[i].diemTB < dsSV[j].diemTB)
			{
				float diemTam = dsSV[i].diemTB;
				dsSV[i].diemTB = dsSV[j].diemTB;
				dsSV[j].diemTB = diemTam;

				char tenTam[50];
				strcpy(tenTam, dsSV[i].hoTen);
				strcpy(dsSV[i].hoTen, dsSV[j].hoTen);
				strcpy(dsSV[j].hoTen, tenTam);
			}
		}
	}

	printf("Danh sach sinh vien\n");

	for (i = 0; i < 5; i++)
	{
		printf("Ho ten: %s\n", dsSV[i].hoTen);
		printf("Diem trung binh: %.2f\n", dsSV[i].diemTB);
		if (dsSV[i].diemTB >= 9)
		{
			printf("Hoc luc: Xuat sac\n");
		}
		else if (dsSV[i].diemTB >= 8)
		{
			printf("Hoc luc: Gioi\n");
		}
		else if (dsSV[i].diemTB >= 6.5)
		{
			printf("Hoc luc: Kha\n");
		}
		else if (dsSV[i].diemTB >= 5)
		{
			printf("Hoc luc: Trung binh\n");
		}
		else
			printf("Hoc luc: Yeu\n");
	}
}

// Bai 9
void Bai9()
{
	int s1, s2;
	int i;

	printf("Xin moi nhap so thu nhat: ");
	scanf("%d", &s1);
	printf("Xin moi nhap so thu hai: ");
	scanf("%d", &s2);

	int count = 0;
	int ketQua[2];

	for (i = 0; i < 2; i++)
	{
		int kq = rand() % 15 + 1;
		ketQua[i] = kq;
	}

	for (i = 0; i < 2; i++)
	{
		if (s1 == ketQua[i])
		{
			count++;
		}
		if (s2 == ketQua[i])
		{
			count++;
		}
	}

	printf("Ket qua xo so la:\n");
	printf("So 1 = %d\n", ketQua[0]);
	printf("So 2 = %d\n", ketQua[1]);

	if (count == 2)
	{
		printf("Chuc mung ban trung giai nhat\n");
	}
	else if (count == 1)
	{
		printf("Chuc mung ban trung giai nhi\n");
	}
	else
		printf("Chuc ban may man lan sau\n");
}

// Bai 10
struct phanSo
{
	int tuSo, mauSo;
};

void Bai10()
{
	struct phanSo s1, s2;
	printf("Phan so thu nhat\n");
	printf("Tu so: ");
	scanf("%d", &s1.tuSo);
	printf("Mau so: ");
	scanf("%d", &s1.mauSo);
	printf("Phan so thu hai\n");
	printf("Tu so: ");
	scanf("%d", &s2.tuSo);
	printf("Mau so: ");
	scanf("%d", &s2.mauSo);

	struct phanSo tong, hieu, tich, thuong;
	tich.tuSo = s1.tuSo * s2.tuSo;
	tich.mauSo = s1.mauSo * s2.mauSo;
	thuong.tuSo = s1.tuSo * s2.mauSo;
	thuong.mauSo = s1.mauSo * s2.tuSo;
	tong.mauSo = s1.mauSo * s2.mauSo;
	tong.tuSo = s1.tuSo * s2.mauSo + s2.tuSo * s1.mauSo;
	hieu.mauSo = s1.mauSo * s2.mauSo;
	hieu.tuSo = s1.tuSo * s2.mauSo - s2.tuSo * s1.mauSo;

	printf("Tong 2 phan so: %d/%d\n", tong.tuSo, tong.mauSo);
	printf("Hieu 2 phan so: %d/%d\n", hieu.tuSo, hieu.mauSo);
	printf("Tich 2 phan so: %d/%d\n", tich.tuSo, tich.mauSo);
	printf("Thuong 2 phan so: %d/%d\n", thuong.tuSo, thuong.mauSo);
}

int main()
{
	int chon;
	do
	{
		printf("----- MENU -----\n");
		printf("1. Kiem tra so nguyen\n");
		printf("2. Tim uoc so chung va boi so chung cua 2 so\n");
		printf("3. Chuong trinh tinh tien cho quan karaoke\n");
		printf("4. Tinh tien dien\n");
		printf("5. Chuc nang doi tien\n");
		printf("6. Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop\n");
		printf("7. Xay dung chuong trinh vay mua tien xe\n");
		printf("8. Sap xep thong tin sinh vien\n");
		printf("9. Xay dung game FPOLY-LOTT\n");
		printf("10. Xay dung chuong trinh tinh toan phan so\n");
		printf("0. Thoat\n");
		printf("Moi ban chon chuc nang: ");
		scanf("%d", &chon);
		printf("\n");

		switch (chon)
		{
		case 1:
			printf("Kiem tra so nguyen\n");
			Bai1();
			break;
		case 2:
			printf("Tim uoc so chung va boi so chung cua 2 so\n");
			Bai2();
			break;
		case 3:
			printf("Chuong trinh tinh tien cho quan karaoke\n");
			Bai3();
			break;
		case 4:
			printf("Tinh tien dien\n");
			Bai4();
			break;
		case 5:
			printf("Chuc nang doi tien\n");
			Bai5();
			break;
		case 6:
			printf("Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop\n");
			Bai6();
			break;
		case 7:
			printf("Xay dung chuong trinh vay mua tien xe\n");
			Bai7();
			break;
		case 8:
			printf("Sap xep thong tin sinh vien\n");
			Bai8();
			break;
		case 9:
			printf("Xay dung game FPOLY-LOTT\n");
			Bai9();
			break;
		case 10:
			printf("Xay dung chuong trinh tinh toan phan so\n");
			Bai10();
			break;
		case 0:
			break;
		default:
			printf("Ban chua chon dung chuc nang. Vui long chon lai.\n");
		}
	} while (chon != 0);
}
