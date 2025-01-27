#include<stdio.h>
int main()
{
	char Graduate;
	int Yearsofexperince;
	//use Y for yes // 
	printf("Are you a Graduate: \t\n");
	scanf("%c", &Graduate);
	
	printf("Years of experince?:\t");
	scanf("%d", &Yearsofexperince);
	
	if(Graduate=='Y' && Yearsofexperince>=1 )
	{
		printf("Eligible Candidate");
	}
		
		else 
		printf("Not Eligible");
		
	
	return 0;
}
