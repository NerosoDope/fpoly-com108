#include <stdio.h>

// Bai 1
void Lab6Bai1()
{
    int i, n;
    float tong, trungBinh;
    int count = 0;

    printf("Nhap so phan tu mang: ");
    scanf("%d", &n);
    int mang[n];
    for (i = 0; i < n; i++)
    {
        printf("Nhap gia tri phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("Gia tri cua phan tu thu %d: %d\n", (i + 1), mang[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (mang[i] % 3 == 0)
        {
            tong += mang[i];
            count++;
        }
    }
    trungBinh = tong / count;
    printf("Trung binh tong cac so chia het cho 3: %.2f\n", trungBinh);
}

// Bai 2
void Lab6Bai2()
{
    int i, n;
    printf("Nhap so phan tu mang: ");
    scanf("%d", &n);
    int mang[n];
    for (i = 0; i < n; i++)
    {
        printf("Nhap gia tri phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
    int min = mang[0], max = mang[0];
    for (i = 0; i < n; i++)
    {
        if (mang[i] > max)
        {
            max = mang[i];
        }
        if (mang[i] < min)
        {
            min = mang[i];
        }
    }
    printf("Gia tri lon nhat cua mang: %d\n", max);
    printf("Gia tri nho nhat cua mang: %d\n", min);
}

// Bai 3
void Lab6Bai3()
{
    int i, j, n;
    printf("Nhap so phan tu mang: ");
    scanf("%d", &n);
    int mang[n];
    for (i = 0; i < n; i++)
    {
        printf("Nhap gia tri phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
    printf("\n");
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (mang[i] < mang[j])
            {
                int temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("Gia tri phan tu thu %d: %d\n", (i + 1), mang[i]);
    }
}

// Bai 4
void Lab6Bai4()
{
    int i, j, m, n;
    printf("Nhap so hang: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);
    int mang2[n][m];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Nhap gia tri cho hang %d cot %d: ", (i + 1), (j + 1));
            scanf("%d", &mang2[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", mang2[i][j] * mang2[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int choose;
    do
    {
        printf("\n");
        printf("----- MENU -----\n");
        printf("1. Tinh trung binh tong cac so chia het cho 3\n");
        printf("2. Tim gia tri lon nhat va nho nhat trong mang\n");
        printf("3. Sap xep mang theo thu tu giam dan\n");
        printf("4. Tinh binh phuong cac phan tu trong mang 2 chieu\n");
        printf("0. Thoat\n");
        printf("Moi ban chon chuc nang: ");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            printf("Tinh trung binh tong cac so chia het cho 3\n");
            Lab6Bai1();
            break;
        case 2:
            printf("Tim gia tri lon nhat va nho nhat trong mang\n");
            Lab6Bai2();
            break;
        case 3:
            printf("Sap xep mang theo thu tu giam dan\n");
            Lab6Bai3();
            break;
        case 4:
            printf("Tinh binh phuong cac phan tu trong mang 2 chieu\n");
            Lab6Bai4();
            break;
        case 0:
            break;
        default:
            printf("Ban chua chon dung chuc nang. Vui long chon lai.\n");
            break;
        }
    } while (choose != 0);
}