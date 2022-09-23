#include<stdio.h>
void main()
{
	int n;
	char k;
	scanf("%c",&k);
	scanf("%d",&n);
	char a[n];
	int i,j=0;
	fflush(stdin);
	gets(a);
	for(i=0;i<n;i++)
	{
		j=j+1;
		if(a[i]>k)
		{
			printf("%c",a[i]);
			break;
		}
	}
	if(j==n)
	for(i=0;i<n;i++)
	{
		if(a[i]<k)
		{
			printf("%c",a[i]);
			break;
		}
	}
	
}
