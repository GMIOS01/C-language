#include<stdio.h>

float a[100],b[100];
int n,i;

void nhap(float a[], int *n){
    printf("Nhap so mon hoc:");scanf("%d",&*n);
    for(i=0;i<*n;i++){
        printf("a[%d]=",i);scanf("%f",a+i);
    }
}

float tinhb(float a[],int n){
    float tong=0;
    for(i=0;i<n;i++){
        tong+=a[i];
    }
    return (float)(tong/n);
}

void tinhc(float a[],float b[],int n){
    for(i=0;i<n;i++){
        if((a[i]>=0)&&(a[i]<=3.9)){
            b[i]=0;
        }
        else if((a[i]>=4)&&(a[i]<=4.9)){
            b[i]=1.5;
        }
        else if((a[i]>=5)&&(a[i]<=5.9)){
            b[i]=2;
        }
        else if((a[i]>=6)&&(a[i]<=6.9)){
            b[i]=2.5;
        }
        else if((a[i]>=7)&&(a[i]<=7.9)){
            b[i]=3;
        }
        else if((a[i]>=8)&&(a[i]<=8.9)){
            b[i]=3.5;
        }
        else if((a[i]>=9)&&(a[i]<=10)){
            b[i]=4;
        }
    }
    printf("Thang diem 4:");
    for(i=0;i<n;i++){
        printf("%.1f ",b[i]);
    }
}

void ghitep(float a[],int n){
    FILE *f;
    f=fopen("diem.txt","w");
    if(f==NULL){
        printf("Loi mo file");
    }
    fprintf(f,"%d\n",n);
    for(i=0;i<n;i++){
        fprintf(f,"%.1f ",a[i]);
    }
    fclose(f);
}

void doctep(float a[],int n){
    float x;
    FILE *f=fopen("diem.txt","r");
    if(f==NULL){
        printf("Loi mo file");
    }
    float max=0;
    while (!feof(f)) {
        fscanf(f, "%f", &x);
        if (x > max) {
            max = x;
        }
    }
    printf("\nGia tri lon nhat la:",max);
    fclose(f);
}

int main(){
    nhap(a,&n);
    printf("Diem trung binh cong:%.1f\n",tinhb(a,n));
    tinhc(a,b,n);
    ghitep(a,n);
    doctep(a,n);
    return 0;
}