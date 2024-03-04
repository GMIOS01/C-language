#include <stdio.h>
#include <math.h>
#include <conio.h>
int main (){
	double a, b, c;
	printf("nhap canh thu nhat cua tam giac:");
	scanf("%lf",&a);
	printf("nhap canh thu hai cua tam giac:");
	scanf("%lf",&b);
	printf("nhap canh thu ba cua tam giac:");
	scanf("%lf",&c);
	float C, S, h, p;
	C=a+b+c;
	p=C/2;
	h=2*(sqrt(p*(p-a)*(p-b)*(p-c))/a);
	S=a*h/2;
	printf("Chu vi hinh tam giac:%f\n",C);
	printf("Dien tich hinh tam giac:%f",S);
	getch();
	return 0;
	
}
