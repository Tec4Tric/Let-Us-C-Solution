#include<stdio.h>
#include<math.h>
int main()
{
	float angle, s,c,t;
	printf("Enter an Angel: \n");
	scanf("%f", &angle);
	angle=angle*3.14/180;
	s= sin(angle);
	c= cos(angle);
	t= tan(angle);
	printf("Sin = %f,  Cos = %f , Tan = %f \n", s,c,t);
	return 0;


}
