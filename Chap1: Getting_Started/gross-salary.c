#include<stdio.h>
int main()
{
	float a;
	printf("Enter your Basic Salary: ");
	scanf("%f",&a);
	printf("Your Gross Salary %.2f\n", a+(0.6*a));
	return 0;
}
