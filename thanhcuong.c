#include <stdio.h>
void in(int a[],int n){
    int i;
    printf("\n");
    for (i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
void kt(int a[],int n,int x){
    int i,dem=0;
    for (i=0;i<=n;i++){
        if (a[i]==x){
            dem++;
            a[i]='K';
        }
    }
    printf("co %d so x trong mang",dem);
    in(a,n);
}
int main(){
    int n,i,x;
    printf("Nhap so phan tu:"); scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++){
        printf("a[%d]",i+1);scanf("%d",&a[i]);
    }
    printf("Nhap x:"); scanf("%d",&x);
    kt(a,n,x);
    return 0;
}
