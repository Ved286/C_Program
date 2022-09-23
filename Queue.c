#include<stdio.h>
#include<stdlib.h>
#define n 5
int f=-1,r=-1,q[n];
int insert (int q[])
{
	int y;
	if(r==-1)
	r=0;
	else if(r=n-1)
	printf("Overflow");
	else
	r++;
	printf("Enter element :");
	scanf("%d",&y);
	q[r]=y;
}
int delete(int q[])
{
	int y;
	if(f==-1)
	{
	printf("Underflow");
	return;
	}
	else if(f==r)
	{
	y=q[f];
	f=-1,r=-1;
	printf("Deleted element is %d ",&y);
	return;
	}
	else
	{
	y=q[f];
	printf("Deleted element is %d ",&y);
	f++;
	return;
	}
	return 0;
}
void main()
{
	
}


