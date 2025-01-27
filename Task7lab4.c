#include<stdio.h>
int main()
{
	int marks=0;
	char grade=' ';
	printf("Enter your marks:");
	scanf("%d", &marks);
	
	if(marks>=70)
	{
	grade='A';
	printf("A grade");}
	else if(marks>=60){
	grade='B';
	printf("B grade");}
	else if(marks>=50){
		grade='C';
		printf("C grade");}
	else if(marks>=40){
	grade='D';
	printf("D grade");}
	else if(marks>=33){
	grade='E';
	printf("E grade");}
	else{
	grade='F';
	printf("Failed");}
	return 0;
}
