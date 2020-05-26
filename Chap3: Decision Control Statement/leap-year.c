#include<stdio.h>
int main()
{
	int y,ly;
	printf("Enter a Year to check Leap Year: \n");
	scanf("%d",&y);
	if(y%4==0)
		printf("The Year %d is a Leap Year.\n", y);
	else
		if(y%400==0)
			printf("The Year %d is a Leap Year.\n", y);
		else
			printf("The Year %d is not a Leap Year.\n", y);
	return 0;

}
