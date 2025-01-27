#include <stdio.h>

int main() {
    int i , num, j;

    for (num = 2; num <= 1000; ++num) 
	{
        int j = 1; 

        for (i = 2; i * i <= num; ++i) 
		{
            if (num % i == 0) 
			{
                j = 0; 
                break;       
            }
        }

        if (j) 
		{
            printf("%d ", num);
        }
    }

    return 0;
}
