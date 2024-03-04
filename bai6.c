#include<stdio.h>

int main (){
    int i, m ,n , d;
    printf("Nhap m,n:");
    scanf("%d%d",&m,&n);
    for  (i=m;i<=n;i++)
    {
        if (i%2==0 && i%5!=0)
        {
            printf("%d ",i);
            d++;
        }
    }
    printf("\n%d",d);
    return 0;
}
