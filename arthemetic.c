#include<stdio.h>
void main()
{
	int num1,num2,sum,diff,prod,quo,remain;
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("\n%d",sum);
	diff=num1-num2;
	printf("\n%d",diff);
	prod=num1*num2;
	printf("\n%d",prod);
	quo=num1/num2;
	printf("\n%d",quo);
	remain=num1%num2;
	printf("\n%d",remain);
}
