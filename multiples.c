#include<stdio.h>
void main()
{
	int x,y,n,a,l,s;
	scanf("%d%d",&x,&y);
	n=y/x;
	a=x;
	l=a*n;
	s=n*(a+l)/2;
	printf("sum of x multiples under y is %d",s);
}
