#include<stdio.h>
void main()
{
	int i,j,n,k;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=4;k>=1;k--)
		{
			printf(" ");
		}
		for(j=1;j>=n;j--) 
		{
			if(j>=i)
			printf("%d",j);
			
		}
	printf("\n");
	}
}
