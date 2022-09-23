#include<stdio.h>
void main()
{
	int i,n,a,j;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		a=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
			a=1;
			break;
			}
		}
		if(a==0)
		{
		printf("%d\n",i);
		}
	}
	
}
