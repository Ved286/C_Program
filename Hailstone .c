#include<stdio.h>
void main()
{
	int n=15,a[]={1,1,1,1,1,1,0,1,1,1,1,1,1,0,0};
	int b[n],c=0,i,j=0;
	printf("Original Data is:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		
		if(a[i]==1)
		c++;
		else
		c=0;
		b[j]=a[i];
		j++;
		if(c==5)
		{
			b[j]=0;
			j++;
			c=0;
		}
	}
	printf("\nStuffed  Data is:");
	for(i=0;i<j;i++)
	{
		printf("%d",b[i]);
	}

}
