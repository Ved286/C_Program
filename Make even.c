#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],c=0,b,i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b=0;
		while(a[i]!=0)
		{
			a[i]=a[i]/10;
			b++;
		}
		if(b%2==0)
		c++;
	}
	printf("%d",c);
}
