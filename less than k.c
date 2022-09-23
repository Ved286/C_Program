#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],k,i,sum=0,j=-1;
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(sum<k)
		j++;
		else
		break;
	}
	printf("%d",j);
}
