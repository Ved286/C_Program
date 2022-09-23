#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void w(int c,int d)
{
	if(c==1)
	{
		if(d==1)
		{
		printf("ONE");
		}
		if(d==2)
		{
		printf("TWO");
		}
		if(d==3)
		{
		printf("THREE");
		}
		
		if(d==4)
		{
		printf("FOUR");
		}
		if(d==5)
		{
		printf("FIVE");
		}
		if(d==6)
		{
		printf("SIX");
		}
		if(d==7)
		{
		printf("SEVEN");
		}
		if(d==8)
		{
		printf("EIGHT");
		}
		if(d==9)
		{
		printf("NINE");
		}
	}
	if(c==2)
	{
	if(d==1)
	{
		printf("TEN ");
	}
		if(d==2)
		{
		printf("TWENTY ");
		}
		if(d==3)
		{
		printf("THIRTY ");
		}
		if(d==4)
		{
		printf("FOURTY ");
		}
		if(d==5)
		{
		printf("FIFTY ");
		}
		if(d==6)
		{
		printf("SIXTY ");
		}
		if(d==7)
		{
		printf("SEVENTY ");
		}
		if(d==8)
		{
		printf("EIGHTY ");
		}
		if(d==9)
		{
		printf("NINETY ");
		}
	}
	if(c==3)
	{
		if(d==1)
		{
		printf("ONE HUNDRED ");
		}
		if(d==2)
		{
		printf("TWO HUNDRED ");
		}
		if(d==3)
		{
		printf("THREE HUNDRED ");
		}
		if(d==4)
		{
		printf("FOUR HUNDRED ");
		}
		if(d==5){
		printf("FIVE HUNDRED ");
		}
		if(d==6)
		{
		
		printf("SIX HUNDRED ");
		}
		if(d==7)
		{
		printf("SEVEN HUNDRED ");
		}
		
		if(d==8)
		{
		printf("EIGHT HUNDRED ");
		}
		if(d==9)
		{
		printf("NINE HUNDRED ");	
		}
	}
	
	if(c==4)
	{
		if(d==1)
		{
		printf("ONE THOUSAND ");
		}
		if(d==2)
		{
		printf("TWO  THOUSAND ");
		}
		if(d==3)
		{
		printf("THREE THOUSAND ");
		}
		if(d==4)
		{
		printf("FOUR THOUSAND ");
		}
		if(d==5)
		{
		printf("FIVE THOUSAND ");
		}
		if(d==6)
		{
		printf("SIX THOUSAND ");
		}
		
		if(d==7)
		{
		printf("SEVEN THOUSAND ");
		}
		
		if(d==8)
		{
		printf("EIGHT THOUSAND ");
		}
		
		if(d==9)
		{
		printf("NINE THOUSAND ");
		}
	}
	if(c==5)
	{
	if(d==1)
	{
		printf("TEN ");
	}
		if(d==2)
		{
		printf("TWENTY ");
		}
		if(d==3)
		{
		printf("THIRTY ");
		}
		if(d==4)
		{
		printf("FOURTY ");
		}
		if(d==5)
		{
		printf("FIFTY ");
		}
		if(d==6)
		{
		printf("SIXTY ");
		}
		if(d==7)
		{
		printf("SEVENTY ");
		}
		if(d==8)
		{
		printf("EIGHTY ");
		}
		if(d==9)
		{
		printf("NINETY ");
		}
	}
	if(c==6)
	{
			if(d==1)
		{
		printf("ONE LAC ");
		}
		if(d==2)
		{
		printf("TWO LAC ");
		}
		if(d==3)
		{
		printf("THREE LAC ");
		}
		
		if(d==4)
		{
		printf("FOUR  LAC ");
		}
		if(d==5)
		{
		printf("FIVE LAC ");
		}
		if(d==6)
		{
		printf("SIX LAC ");
		}
		if(d==7)
		{
		printf("SEVEN LAC ");
		}
		if(d==8)
		{
		printf("EIGHT LAC ");
		}
		if(d==9)
		{
		printf("NINE LAC ");
		}
	}
	if(c==7)
	{
		if(d==1)
	{
		printf("TEN ");
	}
		if(d==2)
		{
		printf("TWENTY ");
		}
		if(d==3)
		{
		printf("THIRTY ");
		}
		if(d==4)
		{
		printf("FOURTY ");
		}
		if(d==5)
		{
		printf("FIFTY ");
		}
		if(d==6)
		{
		printf("SIXTY ");
		}
		if(d==7)
		{
		printf("SEVENTY ");
		}
		if(d==8)
		{
		printf("EIGHTY ");
		}
		if(d==9)
		{
		printf("NINETY ");
		}
 }
	
}
int main() {

 int ch,c=0,d;
 long int n,l,r;
 scanf("%d",&ch);
 scanf("%ld",&n);
 if(ch==1)
 {
 	l=n;
 	while(l!=0)
 	{
 		c++;
 		d=l%10;
 		r=r*10+d;
 		l=l/10;	
	}
	l=r;
	while(l!=0)
	{
 		d=l%10;
 		w(c,d);
 		l=l/10;
		c--	;
	}
 }
 if(ch==2)
 {
	l=n;
 	while(l!=0)
 	{
 		c++;
 		d=l%10;
 		r=r*10+d;
 		l=l/10;	
	}
		l=r;
	
	printf("%d",r);
		 	
 }
    return 0;
}

