#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
void NhapMang(float a[][MAX], int &r, int &c)
{
    //Nhập số dòng
    do
    {
        printf("\nNhap vao so dong: ");
        scanf("%d",&r);

        if(r < 1 || r > MAX)
        {
            printf("\nSo dong khong hop le. Xin kiem tra lai!");
        }

    }while(r < 1 || r > MAX);

    //Nhập số cột
    do
    {
        printf("\nNhap vao so c: ");
        scanf("%d",&c);

        if(c < 1 || c > MAX)
        {
            printf("\nSo cot khong hop le. Xin kiem tra lai!");

        }

    }while(c < 1 || c > MAX);
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            float temp;
            printf("\nNhap a[%d][%d] = ", i, j);
            scanf("%f", &temp);
            a[i][j] = temp;
        }
    }
}

void XuatMang(float a[][MAX], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%8.3f", a[i][j]);
        }
            printf("\n\n");
    }
}

float TinhTongCacSoDuong(float a[][MAX], int r, int c)
{
    float tong = 0;

    int n = r * c; // Tổng số lượng phần tử của mảng
    for(int i = 0; i < n; i++)
    {
        if(a[i / c][i % c] > 0)
        {
            tong += a[i / c][i % c];
        }
    }
    return tong;
}
int main()
{
    float a[MAX][MAX];
    int r, c;
    NhapMang(a, r, c);
    XuatMang(a, r, c);

    float tong = TinhTongCacSoDuong(a, r, c);
    printf("\nTong cac so duong trong mang = %f", tong);
    getch();
    return 0;
}