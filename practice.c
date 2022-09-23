#include<stdio.h>
int checkstuff(int n,int a[])
{	
	int i,j=0,c=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		c++;
		else
		c=0;
		
		if(c==5 && a[i+1]!=0)
		{
			break;
		}
		
	}
	if(i==n)
	{
		return 0;
	}
	else
	{
		printf("Incorrect data as data is not stuffed");
			printf("\nRe Enter %d bit of data\n",n);
			for(i=0;i<n;i++)
				{
					scanf("%d",&a[i]);	
				}
	checkstuff(n,a);
	}	
}
void main()
{
	int a[15]={1,1,1,1,1,1,0,1,1,1,1,1,1,0,1},i;
checkstuff(15,a);
	
	
}

