#include <stdio.h>
#include <conio.h>
#include <string.h>

// Bai 1
struct SinhVien
{
	char mssv[10];
	char tenSV[20];
	char nganhhoc[30];
	float diemTB;
};

int main()
{
	int i, j, n;
	printf("Nhap so sinh vien muon them: ");
	scanf("%d", &n);
	struct SinhVien nhomSV[n];

	for (i = 0; i < n; i++)
	{
		printf("Nhap ma sinh vien: ");
		fflush(stdin);
		gets(nhomSV[i].mssv);
		printf("Nhap ten sinh vien: ");
		fflush(stdin);
		gets(nhomSV[i].tenSV);
		printf("Nhap nganh hoc: ");
		fflush(stdin);
		gets(nhomSV[i].nganhhoc);
		printf("Nhap diem TB: ");
		fflush(stdin);
		scanf("%f", &nhomSV[i].diemTB);
	}

	// Bai 2
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (nhomSV[i].diemTB > nhomSV[j].diemTB)
			{
				struct SinhVien svTemp;
				svTemp = nhomSV[i];
				nhomSV[i] = nhomSV[j];
				nhomSV[j] = svTemp;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		printf("\n");
		printf("Ma so sinh vien: %s\n", nhomSV[i].mssv);
		printf("Ten sinh vien: %s\n", nhomSV[i].tenSV);
		printf("Nganh hoc: %s\n", nhomSV[i].nganhhoc);
		printf("Diem Trung Binh: %.2f\n", nhomSV[i].diemTB);
	}

	// Bai 3
	char mssv[10];
	printf("\n");
	printf("Nhap mssv can tim: ");
	fflush(stdin);
	gets(mssv);

	for (i = 0; i < n; i++)
	{
		if (strcmp(nhomSV[i].mssv, mssv) == 0)
		{
			printf("\n");
			printf("\nMa so sinh vien: %s", nhomSV[i].mssv);
			printf("\nTen sinh vien: %s", nhomSV[i].tenSV);
			printf("\nNganh hoc: %s", nhomSV[i].nganhhoc);
			printf("\nDiem Trung Binh: %.2f", nhomSV[i].diemTB);
		}
	}

	_getch;
	return 0;
}
