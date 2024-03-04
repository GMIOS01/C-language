#include<stdio.h>
void change(int *a){
    scanf("%d",&*a);
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d\n\a",a);
    change(&a);
    printf("%d",a);
    return 0;
}
