#include <stdio.h>
#include <math.h>

int main() 
{
    int p, P = 1;  

    printf("Enter Number: ");
    scanf("%d", &p);

    if (p <= 1) 
	{
        P = 0;  
    } 
	else 
	{
        int i;
        for (i = 2; i <= sqrt(p); ++i) 
		{
            if (p % i == 0) 
			{
                P = 0;  
                break;
            }
        }
    }

    if (P) 
	{
        printf("%d is a prime number.\n", p);
    } 
	else 
	{
        printf("%d is not a prime number.\n", p);
    }

    return 99;
}
