#include<stdio.h>
int main()
{
	int i,j,row;
	i=1;
		printf("Enter Number: ");
		scanf("%d", &row);
	while(i<=row)
	{
		j=1;	
	    while(j<=i)
	    {
		  printf("%d",i);
		  j++;
	    }
	    printf("\n");
	    i++;
    }
	    
	return 0;
}
