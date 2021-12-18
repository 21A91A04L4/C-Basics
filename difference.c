#include<stdio.h>
void main()
{
	int side,area,perimeter;
	
	scanf("%d",&side);
	area=side*side;
	perimeter=4*side;
	printf("area of a square with side %d is %d",side,area);
	printf("\n perimeter of a square with side %d is %d",side,perimeter);
}

