#include<stdio.h>
 main()
{
	float km,m,ft;
	
	printf("Enter Distance in km :\t");
	scanf("%f", &km);
	
	m=km*1000;
	ft=km*3280.84;
	
	printf("ft=%f\n", ft);
	printf("m=%f", m);
	
	return 0;
	
	
}
