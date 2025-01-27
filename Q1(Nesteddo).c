#include<stdio.h>
int main()
{
	int i=1,j,row;
	
	printf("Enter Number of row: ");
	scanf("%d", &row);
	
	do
	{
		j=1;
		do
		{
			printf("%d",i);
			j++;
			
		}
		while(j<=i);
		
	printf("\n");
	i++;	
	}
	while(i<=row);//(i<=row);
	
	return 0;
}
