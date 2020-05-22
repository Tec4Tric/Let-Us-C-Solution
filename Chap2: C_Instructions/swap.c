#include<stdio.h>
int main()
{
	int c,d,e;
	printf("Enter two numbers: \n");
	scanf("%d%d", &c,&d);
	e=c;
	c=d;
	d=e;
	printf("The Swapped Numbers are: %d  %d", c,d);
	return 0;


}
