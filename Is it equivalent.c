#include<stdio.h>
#include<string.h>
#include<math.h>

void main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n+1],d[n+1],i,max=0,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	b[0]=0;
	d[0]=0;
	for(i=1,j=0;i<n+1,j<n+1;i++,j++)
	{
		
		b[i]=a[i-1]-d[i-1];	
		
		d[i]=b[i];
	
		if(d[i]<0)
	
		d[i]=d[i]*(-1);
	
		printf("%d\n",b[j]);
	}
	for(i=0;i<n+1;i++)
	{
		if(b[i]>max)
		{
		max=b[i];
		}
	}
	printf("%d",max);
}
