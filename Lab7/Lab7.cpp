#include <stdio.h>
#include <string.h>

// Bai 1
void Lab7Bai1()
{
    char s[100];
    printf("Nhap chuoi ki tu: ");
    scanf("%s",&s);
    int i = 0;
    int n = 0;
    int p = 0;
    while (s[i++] != '\0')
    {
        if (s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'u' || s[i] == 'o')
        {
            n++;
        }
        else
            p++;
    }
    printf("Chuoi [%s] co chua: %d nguyen am va %d phu am", s, n, p);
}

// Bai 2
void Lab7Bai2()
{
    char userSys[] = "admin";
    char passSys[] = "12345";
    char user[100], pass[100];
    printf("Username: ");
    scanf("%s",&user);
    printf("Password: ");
    scanf("%s",&pass);
    if (strcmp(user, userSys) == 0 && strcmp(pass, passSys) == 0)
    {
        printf("Dang nhap thanh cong");
    }
    else
        printf("Dang nhap that bai");
}

// Bai 3
void in(char s[][20])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Nhap chuoi %d: ", i + 1);
        scanf("%s",&s[i]);
    }
}
void out(char s[][20])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", s[i]);
    }
}
void sort(char s[][20])
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                char temp[20];
                strcpy(temp, s[i]);
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }
}

void Lab7Bai3()
{
    char s[5][20];
    in(s);
    out(s);
    printf("Chuoi sau khi sap xep: \n");
    sort(s);
    out(s);
}

int main()
{
    int choose;
    do
    {
        printf("\n");
        printf("----- MENU -----\n");
        printf("1. Dem nguyen am va phu am cua 1 chuoi\n");
        printf("2. Dang nhap bang username va password\n");
        printf("3. Sap xep chuoi theo chu cai\n");
        printf("0. Thoat\n");
        printf("Moi ban chon chuc nang: ");
        scanf("%d", &choose);

        switch (choose)
        {
        case 1:
            printf("Dem nguyen am va phu am cua 1 chuoi\n");
            Lab7Bai1();
            break;
        case 2:
            printf("Dang nhap bang username va password\n");
            Lab7Bai2();
            break;
        case 3:
            printf("Sap xep chuoi theo chu cai\n");
            Lab7Bai3();
        default:
            break;
        }
    }
    while (choose != 0)
        ;
}