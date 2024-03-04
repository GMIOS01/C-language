#include<stdio.h>

struct vecto
{
    int x,y,z;
};

typedef struct vecto vecto;

void nhap(vecto *a, vecto *b){
    printf("Nhap vecto a:");scanf("%d %d %d",&a->x,&a->y,&a->z);
    printf("Nhap vecto b:");scanf("%d %d %d",&b->x,&b->y,&b->z);
}

void kiemtra(vecto a, vecto b){
    if(a.x*b.x+a.y*b.y+a.z*b.z==0){
        printf("2 vecto vuong goc nhau");
    }
    else printf ("Deo vuong goc");
}


int main(){
    vecto a,b;
    nhap(&a,&b);
    kiemtra(a,b);
    return 0;
}