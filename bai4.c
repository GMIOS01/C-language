#include<stdio.h>

int main ()
{
    int s=0, d=0, n;
    printf("nhap n:");
    while (1)
    {
    	scanf("%d",&n);
    	if (n%2==0)
    	{
    		s+=n;
    		d+=1;
		}
		if (n==0)
		{
			break;
		}
	}

    printf("s/d=%d",s/d);
    return 0;
}
