#include<stdio.h>
char main()
{
	char snacktime=0;
	// use F for fruit and J for juice//
	
	printf("What have you eaten in snack time:\t");
	scanf("%c", &snacktime);
	
	if(snacktime=='F' || snacktime=='J')
	{
		printf("Healthy food");
	}
	else
	{
		printf("Unhealthy food");
	}
	return 0;
}
