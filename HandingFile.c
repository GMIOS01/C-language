#include<stdio.h>
#include<stdlib.h>

int main(){
    system("2");
    int a[100],n;
    FILE *f=fopen("deptrai.txt","r");
    if(f==NULL)
	{
		printf("loi file");
		exit(0);
	}
    fscanf(f,"%d",&n);
    //printf("%d\n",n);
    for(int i=0;i<5;i++){
        fscanf(f,"%d",a+i);
        ;
        if()
    }
    fclose(f);
    return 0;
}