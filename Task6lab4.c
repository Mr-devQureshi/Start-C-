#include<stdio.h>
int main()
{
	char V;
	printf("Enter Letter:\n");
	scanf("%c", &V);
	// Use capital letters//
	if(V=='A' || V=='E' || V=='I' || V=='O' || V=='U')
	{
		printf("Vowel");
	}
	else if(V=='W' || V=='Y')
	{
		printf("Consonant");
	}
	return 0;
}
