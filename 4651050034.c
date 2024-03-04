#include <stdio.h>

void PrimeFactorize(int n)
{
    for (int i=2;i<=n;i++){
        while(n%i==0)
        {
            printf("%d",i);
            n/=i;
            if(n!=1){
                printf("x");
            }
        }
    }
}

int main (){
    int n;
    printf("Nhap n:"); scanf("%d",&n);
    PrimeFactorize(n);
    return 0;
}
