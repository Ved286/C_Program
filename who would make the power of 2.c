#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int i,j,l=0,k,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		if(i<j)
			{
				k=a[i]+a[j];
				if(k!=1)
				{
					while(k!=2)
					{
						if(k%2==0)
						k=k/2;
						else
						{
							break;
						}
					}
				}	
				if(k==1)		
				l++;
				if(k%2==0)
				l++;
			}
		}
	}
	printf("%d ",l);
}
