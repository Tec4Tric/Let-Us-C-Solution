#include<stdio.h>
int main()
{
	float m,f,i,c,k;
	printf("Enter the distance between two cities(km): ");
	scanf("%f",&k);
	m=1000*k;
	f=3281*k;
	i=12*f;
	c=100*m;
	printf("Distance(km) in Meters: %.2f\n",m );
	printf("Distance(km) in Feets: %.2f\n", f);
	printf("Distance(km) in Inches: %.2f\n", i);
	printf("Distance(km) in Centimeters: %.2f\n", c);
	return 0;
}
