#include<stdio.h>
void main()
{
	int amt,a,b,c,d;
	scanf("%d",&amt);
	a=(amt/2000);
	printf("2000 notes=%d",a);
	b=(amt%2000)/500;
	printf("\n500 notes=%d",b);
	c=((amt%2000)%500)/200;
	printf("\n200 notes=%d",c);
	d=(((amt%2000)%500)%200)/100;
	printf("\n100 notes=%d",d);
	
	
}
