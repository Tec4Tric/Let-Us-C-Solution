#include<stdio.h>
int main()
{
	int y,diff,leap_days,day,norm_days,total_days;
	printf("Enter an Year: \n");
	scanf("%d", &y);
	diff=y-1;
	norm_days=diff*365;
	leap_days=diff/4 - diff/100+diff/400;
	total_days=norm_days+leap_days;
	day=total_days%7;
	if(day==0)
		printf("Monday.\n");
	if(day==1)
		printf("Tuesday.\n");
	if(day==2)
		printf("Wednessday.\n");
	if(day==3)
		printf("Thursday.\n");
	if(day==4)
		printf("Friday.\n");
	if(day==5)
		printf("Saturday.\n");
	if(day==6)
		printf("Sunday.\n");
	return 0;
}
