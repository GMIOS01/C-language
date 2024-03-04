#include <stdio.h>
#include <math.h>
#include <conio.h>

int main (){
    int a, b, c;
    float x1, x2, delta;
    printf("nhap he cac he so a, b ,c:");
    scanf("a=%d, b=%d, c=%d",&a,&b,&c);
    delta= b*b-4*a*c;
    if (delta==0)
    x1=x2=(-b)/(2*a);
    printf("pt co nghiem kep:%f",x1);
    else if (delta>0)
        x1=(-b+sqrt(delta))/2*a;
        x2=(-b-sqrt(delta))/2*a;
        printf("pt co 2 nghiem phan biet:x1=%f,x2=%f",x1,x2);
        else printf("phuong trinh vo nghiem")
    return 0;
}