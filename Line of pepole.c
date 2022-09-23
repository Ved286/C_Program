#include<stdio.h>
void main()
{
	int n,a,b,i,j,k=0;
	scanf("%d %d %d",&n,&a,&b);
	for(i=n-1,j=0;i>=a,j<=b;i--,j++)
	{
		if(j<=b && i>=a)
		k++;
		else
		break;
	}
	printf("%d",k);
}
