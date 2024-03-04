#include<stdio.h>

main (){
	int a,b;
	for (a=1;a<=9;a++)
	{
		for (b=0;b<=9;b++)
		{
			if(a*b==2*(a+b))
				printf("%d\n",a*10+b);
		}
	}
}
