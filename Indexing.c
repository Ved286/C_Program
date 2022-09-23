#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],b=0,c=0,j,i,k;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	k=n/2;
	for(i=0;i<n/2;i++)
	{
		b=b+a[i];
	}
	for(i=n;i>n/2;i--)
	{
		c=c+a[i];
	}
	if(b==c)
	{
		printf("%d",k);
	}
	else
	{
		printf("-1");	
	}
}
