#include<stdio.h>
int main()
{
	int wind=0;
	
	printf("Enter wind speed:");
	scanf("%d", &wind);
	
	if(wind>=72)
	{
	printf("Hurricane");}
	else if(wind>=55)
	{
	printf("Whole gale");}
	
	else if(wind>=39){
	printf("Gale");}
	else if(wind>=25){
	printf("Strong Wind");}
	else{
	
	printf("Not strong wind");}
	return 0;
}
