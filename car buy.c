#include<stdio.h>
void main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n],i,j,temp;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
 	{
 		for(j=0;j<n-1-i;j++)
 		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	int sum=0,l=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(sum<=k)
		l++;
	}
	printf("%d",l++);
}
