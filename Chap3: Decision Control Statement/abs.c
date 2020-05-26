#include<stdio.h>
//#include<stdlib.h>
int main()
{
	float a,b;
	printf("Enter a number to get absolute value. \n");
	scanf("%f",&a);
	/*
	b=abs(a);
	printf("The absolute value is %.2f\n", b);
	*/
	if(a<0)
		printf("The ABS value is %.2f\n", -a);
	else
		printf("The ABS value is %.2f\n", a);
	return 0;
}
