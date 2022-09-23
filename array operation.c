#include<stdio.h>
void main()
{
	int n,k;
	scanf("%d",&n);
	int a[n],i,j=0,d,b,c=0,f;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		j=j*10+a[i];
	}
	b=j+k;
	f=b;
	while(f!=0)
	{
		d=f%10;
		f=f/10;
		c++;
	}
	int e[c];
	if(c>n)
	{
	for(i=c-1;i>=0;i--)
		{
			d=b%10;
			b=b/10;
			e[i]=d;
		}
		for(i=0;i<c;i++)	
		{
			printf("%d ",e[i]);
		}	
	}
	else
	{
	for(i=n-1;i>=0;i--)
		{
			d=b%10;
			b=b/10;
			a[i]=d;
		}
		for(i=0;i<n;i++)	
		{
			printf("%d ",a[i]);
		}	
	}
}
