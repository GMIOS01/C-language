#include<stdio.h>

int i;
int main(){
    long long n,a[1000000],d,dem=0;
    scanf("%lld %lld",&n,&d);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        while (a[i]<=a[i-1])
        {
            a[i]+=d;
            dem++;
        }
    }
    printf("%lld",dem);
    return 0;
}