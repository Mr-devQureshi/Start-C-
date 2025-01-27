#include<stdio.h>
float main()
{
	float C,F;
	float Temperature=1;
	
	printf("Enter temperature in F = ");
	scanf("%f", &F);
	Temperature =(F-32)*0.55555;
	
	printf("Temperature in C=%.2f", Temperature);
	
	return 0;
	
}

