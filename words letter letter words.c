#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	
	int c,i,j,n,m,max=0;
	gets(b);
	scanf("%d",&n);
	c=strlen(b);
	int k[n];
	for(i=0;i<n;i++)
	{
		scanf("%s",&a[i]);
	}
	printf("%s",a[i]);
	for(i=0;i<n;i++)
	{
		k[i]=0;
		for(j=0;j<c;j++)
		{
			m=strlen(a[i]);
			if(a[i]==b[j])
			k[i]=k[i]+1;
		}
		if(k[i]==m)
		k[i]=k[i];
		else
		k[i]=0;
	}
	for(i=0;i<n;i++)
	{
		if(k[i]>max)
		max=k[i];
	}
	printf("%d",max);
}
