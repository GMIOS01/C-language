#include <stdio.h>
 int main(){
    int n, m=0;
    printf("Nhap n:");
    do {
        scanf("%d",&n);
        if (n>m)
        {
            m=n;
        }
        else printf ("Nhap lai n:");
    }while (n<=0);
    printf("Gia tri m la:%d",m);
    return 0;
 }
