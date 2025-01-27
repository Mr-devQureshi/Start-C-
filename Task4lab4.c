#include<stdio.h>
int main()
{   
	int age=0;
	printf("Enter Your age: \n");
	scanf("%d", &age);
	if(age>0 && age<=110)
	{
	printf("Valid age");
    }
	else
	{
		printf("Invalid age");
	}
	return 0;
}

