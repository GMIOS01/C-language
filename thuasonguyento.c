#include <stdio.h>
#include <math.h>

void factorize( long long n){
    long long mu = 0,res;
    for(int i = 2; i <= sqrt(n); i++){
        int dem=0;
        while(n % i == 0){
            n /= i; // n se giam 
            dem++;
        }
        if(dem>mu){
            mu=dem;
            res=i;
        }
    }
    if(n > 1){
        if(mu==0){
            mu=1;
            res=n;
        }
    }
    printf("%lld %lld",res, mu);
}

int main(){
    long long n;
    scanf("%lld",&n);
    factorize(n);
    return 0;
}