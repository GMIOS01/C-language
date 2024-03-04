#include <stdio.h>

main(){
    int m,n,i,j;
    printf("Nhap m,n");scanf("%d%d",&m,&n);
    for ( i=0;i<n;i++)
    {
        for( j=0; j<m;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
