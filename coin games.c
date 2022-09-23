#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	if(n>=1 && n<=230)
	{
	int i,j,k=0,l;
	for(i=1;i<=n;i++)
	{
		l=n-i;
		n=l;
		printf("%d\n",l);
		if(l>=n)
		k++;
	}		
	printf("%d",k);
	}
	
	
}
