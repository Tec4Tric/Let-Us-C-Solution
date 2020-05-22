#include<stdio.h>
#include<math.h>
int main()
{

	int x,y,r,b;
	printf("Enter Cartesian Co-Ordinates for X and Y: \n");
	scanf("%d%d", &x,&y);
	r=sqrt(x*x+y*y);
	b=1/tan(y/x);
	printf("The Polar Converted Co-Ordinates are: %d  %d\n", r, b);
	return 0;

}
