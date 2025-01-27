#include<stdio.h>
int findGCD(int a, int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return findGCD(b,a%b);
	}
}

int main()
{
	int numa, numb;
	
	printf("Enter first number: ");
	scanf("%d",&numa);
	
	printf("Enter second number: ");
	scanf("%d",&numb);
	
	int gcd= findGCD(numa, numb);
	
	printf("GCD of %d and %d is: %d",numa,numb,gcd);
	
	return 0;
}
