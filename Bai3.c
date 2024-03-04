#include <stdio.h>

int main (){
    int s=0, i ,n;
    printf("Nhap so n:");
    scanf("%d",&n);
    for (i=n;i>=1;i--)
    {
        if (i%2==0)
        {
            s+=i*i;
        }
    }
    printf("gia tri cua s:%d",s);
    return 0;
}