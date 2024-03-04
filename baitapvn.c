#include <stdio.h>
#include <math.h>

int main (){
    int n, chan=0, t=0;
    do{
        printf("\nnhap 1 so nguyen bat ki:");
        scanf("%d",&n);
        t+=n;
        if (n%2==0)
        {
            chan++;
        }
        if(n<2){
            printf("%d ko phai la so nguyen to",n);
        }else {
            int kt = 1;
            for (int i=2;i<=sqrt(n);i++)
            {
                if ( n%i==0 ){
                    kt=0;
                    break;
                }
            }
            if(kt==1)
            {
                printf("%d la so nguyen to\n",n);
            }
            else {
                printf("%d day ko phai la so nguyen to\n",n);
            }
        }
    }while (n!=0);
    printf("tong cac so vua nhap vao: %d",t);
    printf("co %d so chan\n",chan);
    return 0;
}
