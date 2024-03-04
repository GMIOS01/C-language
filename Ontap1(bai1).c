#include<stdio.h>

float a[100];
int i,n;

void Nhap(float a[],int *n){
    printf("Nhap n:");scanf("%d",&*n);
    for(i=0;i<*n;i++){
        printf("a[%d]=",i);scanf("%f",a+i);
    }
}

int b(float a[],int n){
    int dem=0;
    for (i=0;i<n;i++){
        if ((a[i]>=7) && (a[i]<8)){
            dem++;
        }
    }
    return dem;
}

int c(float a[],int n){
    int dem=0;
    float tong=0;
    for(i=0;i<n;i++){
        tong+=a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>(float)(tong/n)){
            dem++;
        }
    }
    return dem;
}

void d(float a[],int n){
    FILE *f;
    f = fopen("diem.txt", "w");
    if(f == NULL){
        printf("Khong the mo file!\n");
    }
    for(i=0;i<n;i++){
        fprintf(f,"%.1f ",a[i]);
    }
    fclose(f);
}

void e(float a[],int n){
    float x,tong=0;int dem=0;
    FILE *f;
    f = fopen("diem.txt", "r");
    if(f == NULL){
        printf("Khong the mo file!\n");
    }
    for(i=0;i<n;i++){
        fscanf(f,"%f",&x);
        tong+=x;
    }
    for(i=0;i<n;i++){
        if(a[i]>8){
            dem++;
        }
    }
    if((dem==n) && ((tong/n)>8)){
            printf("Hoc sinh du dieu kien nhan hoc bong");
        }
    else printf("Deo du dieu kien");
    fclose(f);
}

int main(){
    Nhap(a,&n);
    printf("Co %d diem dat diem B\n",b(a,n));
    printf("Co %d mon co diem lon hon diem trung binh\n",c(a,n));
    d(a,n);
    e(a,n);
    return 0;
}