#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100],c[10];
	int i,j,n,k=0;
	gets(a);
	scanf("%s",&c);
	gets(b);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			k=k+1;
		}
	}
	if(k==n)
	printf("true");
	else
	printf("false");
}
