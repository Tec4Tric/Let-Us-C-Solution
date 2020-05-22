#include<stdio.h>
#include<math.h>
int main()
{
	float a, b,c,d,s,area;
	printf("Enter the values for three sides: \n");
	scanf("%f%f%f", &a,&b,&c);
	s=(a+b+c)/2;
	d=s*(s-a)*(s-b)*(s-c);
	area= sqrt(d);
	printf("The are of the Triangle is: %.2f\n", area);
	return 0;


}
