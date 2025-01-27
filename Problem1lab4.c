#include<stdio.h>
int main()
{
	int oranges=0;
	int dozen=0;
	int remainder=0;
	
	printf("Enter number of oranges:");
	scanf("%d", &oranges);
	dozen=oranges/12;
	remainder=oranges%12;
	
	if(remainder==0)
	{
		printf("%d dozen of orange", dozen);
	}
	else 
	{
		printf("Not a dozen");
	}
	return 0;
	
}

