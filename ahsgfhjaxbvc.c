#include<stdio.h>
#include<string.h>
void main()
{
	char a[1000],b[100];
	int i,j=0,c=0,m=0,max=0,l;
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]!=' ')
		c++;
		else
		{
			if(c>max)
			{
				max=c;
				m=i-max;
			}
		c=0;
		}
	}
	if(c>max)
	{
		max=c;
		m=l-max;
	}
	for(i=m;i<m+max;i++)
	{
		b[j]=a[i];
		j++;
	}
	b[j]='\0';
	puts(b);
}


