#include<stdio.h>
 main()
{
	int g;
	printf("Enter your marks: ");
	scanf("%d", &g);
	
	switch(g)
	{
	
	case 86:
		printf("A Grade, 4 GPA");
		break;
	case 82:
		printf("A- Grade, 3.67 GPA");
		break;
	case 78:
		printf("B+ Grade, 3.33 GPA");
		break;
	case 74:
		printf("B Grade, 3 GPA");
		break;
	case 70:
		printf("B- Grade, 2.67 GPA");
		break;
	case 66:
		printf("C+ Grade, 2.33 GPA");
		break;
	case 62:
		printf("C Grade, 2 GPA");
		break;
	case 58:
		printf("C- Grade, 1.67 GPA");
		break;
	case 54:
		printf("D+ Grade, 1.33 GPA");
		break;
	case 50:
		printf("D Grade, 1 GPA");
		break;
		default:
		printf("Invalid input");
}
return 0;
}
