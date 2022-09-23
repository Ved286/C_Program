#include<stdio.h>
#include<string.h>
void piarray(int *a,char *p,int m)
{
	int i=1,l=0,j,k,n,c;
	for(i=0;i<m;i++)
	{
		a[i]=0;
	}
	for(i=1;i<m;i++)
	{
		k=i;
		l=1;
		while(k!=0)
		{
			j=0;
			n=k;
			c=0;
			while(n<=i)
			{
				if(p[j]==p[n])
					{
						c++;
					}
				j++;
				n++;
			}
			if(l==c)
				{
					a[i]=c;
				}
			l++;
			k--;
		}
		
	}
	printf("\n************************************");
	printf("\n\tPrefixsuffix Array\n");
	printf("\nParticular string\tValues:-");
	
	for(i=0;i<m;i++)
	{
		j=0;
		printf("\n");
		while(j<=i)
		{
			printf("%c",p[j]);
			j++;
		}
		printf("\t\t\t  %d  ",a[i]);
		printf("\n");
	}
	
}
void kmp(char* p,char*t)
{
	int n,m,i=0,j=0,c=0;
	n=strlen(t);
	m=strlen(p);
	int a[m];
	piarray(a,p,m);
	printf("\n");
	while(i<n)
	{
		if(t[i]==p[j])
		{
			i++;
			j++;
			if(j==m)
			{
				printf("\n string match at %d",i-j);
				c++;
				j=a[j-1];
			}
		}
		else 
		{
			if(j==0)
			i++;
			else
			j=a[j-1];
		}
	}
	if(c==0)
	printf("No string matched");
	
}
void main()
{
	printf("Enter the Text string:-");
	char t[50],p[20];
	gets(t);
	printf("Enter the Pateern string:-");
	gets(p);
	kmp(p,t);
}
