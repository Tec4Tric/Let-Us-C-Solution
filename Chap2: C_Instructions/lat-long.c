#include<stdio.h>
#include<math.h>
int main()
{

	float l1,l2,g1,g2,D;
	printf("Please Enter the Latitude for the 1st location: \n");
	scanf("%f", &l1);
	printf("Please Enter the Longitude for the 1st location: \n");
	scanf("%f", &l2);
	printf("Please Enter the Latitude for the 2nd location: \n");
	scanf("%f", &g1);
	printf("Please Enter the Longitude for the 2nd location: \n");
	scanf("%f", &g2);
	l1=l1*3.14/180;
	l2=l2*3.14/180;
	g1=g1*3.14/180;
	g2=g2*3.14/180;
	D=3963*1/(cos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1)));
	printf("The distances between those two locations are in nautical miles: %f\n",D);

	
}
