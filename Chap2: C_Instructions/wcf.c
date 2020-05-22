#include<stdio.h>
#include<math.h>
int main()
{
	float t,v,wcf;
	printf("Enter the value of Temp: \n");
	scanf("%f",&t);
	printf("Enter the value of Wind Velocity: \n");
	scanf("%f",&v);
	wcf=35.64+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
	printf("The Wind Chill Factor is: %.4f\n",wcf);
	return 0;


}
