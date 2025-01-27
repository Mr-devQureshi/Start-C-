#include<stdio.h>
 main()
{
	int jumpyear;
	
	printf("Enter your birth year:");
	scanf("%d", &jumpyear);
	
	if(jumpyear%400==0 || jumpyear%4==0 && jumpyear%100!=0)
	{
		printf("%d is Leap year", jumpyear);
	}
     else
    {
	printf("%d is not a leap year", jumpyear);   
    }
	return 0;	
}
