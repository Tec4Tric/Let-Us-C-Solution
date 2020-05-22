#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	float avg;
	printf("Enter the marks one by one by pressing the Enter Key: \n");
	scanf("%f%f%f%f%f", &a,&b,&c,&d,&e);
	avg = (a+b+c+d+e)/5;
	printf("Aggregated Marks: %.2f\n", avg);
	printf("Percentage Marks: %.2f %%\n", (a+b+c+d+e)/500 * 100);
	return 0;
}
