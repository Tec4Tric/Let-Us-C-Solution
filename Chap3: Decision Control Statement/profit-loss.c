#include<stdio.h>
int main()
{	
	float cp,sp,p,l;
	printf("Enter Cost Price:\n");
	scanf("%f",&cp);
	printf("Enter Selling Price:\n");
	scanf("%f",&sp);
	p=sp-cp;
	l=cp-sp;
	if(p>l)
	{
		printf("You have made %.2f profits.\n",p);
	}	
	else
		printf("You have made %.2f loss.\n",l);
	return 0;


}
