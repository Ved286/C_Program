#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n+1],l=0,k,m,i,j=0,d;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		j=j*10+a[i];
	}
	j++;
	if(j==10)
	{
	printf("1 0");
	}	
	else
	{
		printf("%d",j);
		printf("\n");
		for(i=n-1;i>=0;i--)
		{
			d=j%10;
			j=j/10;
			a[i]=d;
			}
		for(i=0;i<n;i++)	
		{
			printf("%d ",a[i]);
		}
	}
}
