#include <stdio.h>

int calculatedelivery(int amount,int order,int charges)
{
    if(amount >= order)
	{
        return 0;
    }
	else
	{
        return charges;
    }
}

int main()
{
    int amount,order = 500,charges = 150;

    printf("Enter user's purchase amount in Rs: ");
    scanf("%d",&amount);

    int totalcharges = calculatedelivery(amount,order,charges);

    printf("Total amount including delivery chargesRs %d",amount+totalcharges);

    return 0;
}
