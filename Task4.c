#include<stdio.h>
int main()
{
	int l;
	int b;
	int Area = 1;
	
	printf("Enter length :\t");
	scanf("%d", &l);
	
	printf("Enter Base :\t");
	scanf("%d", &b);
	
	Area = l*b;
	printf("Area = %d unit^2", Area);
	return 0;
		
}
