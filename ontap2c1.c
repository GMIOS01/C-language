#include<stdio.h>
#include<stdlib.h>

int a[100],i,n,j;

void nhap(int a[],int *n){
    printf("Nhap n phan tu:");scanf("%d",&*n);
    for(i=0;i<*n;i++){
        printf("a[%d]=",i); scanf("%d",a+i);
    }
}

void b(int a[],int n){
int dem=0,temp;
    printf("Cac so hoan thien la:");
    for(i=0;i<n;i++){
    	temp=0;
        for(j=1;j<a[i];j++){
            if(a[i]%j==0){
                temp+=j;
            }
        }
        if(temp==a[i]){
            dem++;
            printf("%d ",a[i]);
        }
    }
    printf("\nCo %d so hoan hao\n",dem);
}

void c(int a[],int n){
    int cs=a[1]-a[0];
    for(i=1;i<n;i++){
        if((a[i]-a[i-1])!=cs){
            printf("Deo phai la cap so cong\n");
            exit(0);
        }
    }
    printf("La cap so cong\n");
}

int cmpfunc(const void *x,const void *y){
    return (*(int*)y - *(int*)x);
}

void ghitep(int a[],int n){
    FILE *f=fopen("numbers.txt","w");
    if(f==NULL){
        perror("Loi ko mo dc file");
        exit(0);
    }
    qsort(a,n,sizeof(int), cmpfunc);
    for(i=0;i<n;i++){
        fprintf(f,"%d\t",a[i]);
    }
    fclose(f);
}

int main(){
    nhap(a,&n);
    b(a,n);
    c(a,n);
    ghitep(a,n);
    return 0;
}
