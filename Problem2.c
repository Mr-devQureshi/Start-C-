#include <stdio.h>

int LSD(int num)
{
    return num % 10;
}

int MSD(int num)
{
    while(num >= 10)
	{
        num /= 10;
    }
    return num;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

   
    printf("LSD is %d\n",LSD(num));
    printf("MSD is %d",MSD(num));

    return 0;
}
