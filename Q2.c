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

int findLCM(int a, int b, int multiple)
{
	if(multiple %a==0 && multiple%b==0)
	{
		return multiple;
	}
	else
	{
		return findLCM(a,b,multiple+a);
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
	
	int lcm=(numa*numb)/gcd;
	
	int multiple=(numa>numb)? numa:numb;
	
	lcm=findLCM(numa,numb,multiple);
	
	printf("LCM of %d and %d is : %d",numa,numb,lcm);
	
	return 0;
	
}
