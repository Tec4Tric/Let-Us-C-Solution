#include<stdio.h>
int main()
{
	int c,f;
	printf("Temp in F: ");
	scanf("%d",&f);
	c=(f-32)*5/9;
	printf("Temp in C: %d\n",c);
	return 0;
}
