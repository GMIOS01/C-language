#include <stdio.h>

void  binary(int n){
    int r;
    if (n==0)
        return;
    else 
        r=n%2;
        binary(n/2);
        printf("%d",r);
}
int main(){
    int n;
    do {
        printf("Nhap 1 so nguyen duong n:");
        scanf("%d",&n);
    }while (n<0);
    binary(n);
    return 0;
}