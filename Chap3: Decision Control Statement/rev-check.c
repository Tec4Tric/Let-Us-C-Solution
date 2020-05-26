#include<stdio.h>
int main()
{
	int rest,a1,a2,a3,a4,a5,org,rev;
	printf("Enter a five digit number: \n");
	scanf("%d",&org);
	a1=org%10;
	rest=org/10;
	a2=rest%10;
	rest=rest/10;
	a3=rest%10;
	rest=rest/10;
	a4=rest%10;
	rest=rest/10;
	a5=rest%10;
	rest=rest/10;
	printf("Entered Number: %d\n", org);
	rev=a1*10000+a2*1000+a3*100+a4*10+a5;
	printf("Revered Number: %d\n", rev);
	if(org!=rev)
		printf("They are Reversed!\n");
	else
		printf("They are Same.\n");
	
	return 0;



}
