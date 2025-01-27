#include<stdio.h>
#include<math.h>
int main()
{
	float speed , distance, acceleration, time;
	 printf("Enter the speed of the jet in m/s: ");
	 scanf("%f", &speed);
	 
	 printf("Enter the distance in m: ");
	 scanf("%f", &distance);
	 
	 acceleration = (speed * speed) / (2 * distance);
	  time = speed / acceleration;
	  
	  printf("Acceleration of jet : %f m/s^2\n", acceleration);
	  printf("Time taken : %f seconds", time);
	  
	  return 0;
	 
}
