#include<stdio.h>
int main()
{
	int a, a1,a2,a3,a4,a5;
	printf("Enter Five digit number: ");
	scanf("%d", &a);
	a5=a%10;
	a4=(a%100)/10;
	a3=(a%1000)/100;
	a2=(a%10000)/1000;
	a1=(a%100000)/10000;
	printf("The digits are: %d %d %d %d %d\n", a1,a2,a3,a4,a5);
	printf("The reversed digits are: %d %d %d %d %d\n", a5,a4,a3,a2,a1);
	return 0;


}
