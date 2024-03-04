#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    char kitu;
    getchar(); // Ð?c ký t? enter sau n, b?n cung có th? dùng scanf
    scanf("%c", &kitu);
    printf("So vua nhap : %d\n", n);
    printf("Ki tu vua nhap : %c\n", kitu);
    return 0;
}
