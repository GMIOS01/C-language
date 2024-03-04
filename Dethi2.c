#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

struct ThueDoanhNghiep
{
    char tenDoanhNghiep[100];
    float doanhThu;
};

typedef struct ThueDoanhNghiep ThueDoanhNghiep;

ThueDoanhNghiep nhap(){
    ThueDoanhNghiep x;
    printf("Nhap ten doanh nghiep:"); gets(x.tenDoanhNghiep);
    printf("Nhap doanh thu(trieu dong):"); scanf("%f",&x.doanhThu);
    return x;
}   //

void thue(ThueDoanhNghiep x){
    float thue;
    if(x.doanhThu>50){
        thue = 0.02 * (x.doanhThu-50);
        printf("Thue doanh nghiep la:%.2f trieu dong",thue);
    }
    else {
        printf("doanh nghiep ko co thue");
    }
}

void SET_COLOR(int color)
{
	WORD wColor;
     

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          wColor = (csbi.wAttributes & 0xF0) + (color & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
}

int main(){
    ThueDoanhNghiep s;
    SET_COLOR(1);
    s=nhap();
    printf("Ten doanh nghiep la:%s\n",s.tenDoanhNghiep);
    printf("Doanh thu:%.1f trieu dong\n",s.doanhThu);
    thue(s);
}