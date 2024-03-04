#include <stdio.h>

unsigned long long  sofibonthun (int n){
    unsigned long long f,f1=0,f2=1;
    int i;
    if(n>=2){
        for (i=2;i<=n;i++){
            f=f1+f2;
            f1=f2;
            f2=f;
        }
    }else if(n==1) {
        f=1;
    }else if(n==0){
        f=0;
    }
    printf("so fibon thu %llu la : %llu",n,f);
}
int main (){
    int n;
    scanf("%llu",&n);
    sofibonthun(n);
}