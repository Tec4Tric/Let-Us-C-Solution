#include<stdio.h>
int main()
{
	int r,r1,r2,r5,r10,r50,r100,rest;
	printf("Enter a Number:  \n");
	scanf("%d",&r);
	r100=r/100;
	rest=r%100;
	r50=rest/50;
	rest=rest%50;
	r10=rest/10;
	rest=rest%10;
	r5=rest/5;
	rest=rest%5;
	r2=rest/2;
	rest=rest%2;
	r1=rest/1;
	rest=rest%1;
	printf("Rs. 100 = %d\n Rs. 50 = %d\n Rs. 10 = %d\n Rs. 5 = %d\n Rs. 2 = %d\n Rs. 1 = %d\n ", r100,r50,r10,r5,r2,r1);
	printf("Minimum no of notes: %d\n",r1+r2+r5+r10+r50+r100 );
	return 0;
}
