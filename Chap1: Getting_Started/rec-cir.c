#include<stdio.h>
int main()
{
	float l,b,r;
	printf("Enter the length and breadth of a Rec: \n");
	scanf("%f%f", &l,&b);
	printf("Enter the Radius of a Circle: \n");
	scanf("%f",&r);
	printf("Area of a Rectangle: %.2f\n",l*b);
	printf("Perimeter of a Rectangle: %.2f\n",2*(l+b));
	printf("Area of a Cirle: %.2f\n",3.1*r*r);
	printf("Circumference of a Circle: %.2f\n", 2*3.14*r);
	return 0;
}
