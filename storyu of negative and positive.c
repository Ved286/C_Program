#include<stdio.h>
void main()
{
	int i,j,n,b,k=0,max=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=max)
		{	
			b=a[i]*(-1);
			for(j=0;j<n;j++)
			{
				if(b==a[j])
				{	
					max=a[i];
					k++;
				}
			}
		}
	}
	if(k>0)
	printf("%d",max);
	else
	printf("-1");
}
