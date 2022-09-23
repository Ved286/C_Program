#include<stdio.h>
void main()
{
	int a,b,c,d,n;
	scanf("%d",&n);
		a=n%10;
		n=n/10;
		b=n%10;
		n=n/10;
		c=n%10;
		n=n/10;
		d=n%10;
		n=n/10;
	if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
	printf("The number is lucky");
	if(a==b||a==c||a==d||b==c||b==d||c==d)
	printf("The number is unlucky");
}
