#include<stdio.h>
int main()
{
    int y;
    printf("Please Enter a Year: \n");
    scanf("%d",&y);
    if(y%4==0 || y%100==0 || y%400==0)
        printf("The Year %d is a Leap Year.\n",y);
    else
    {
        printf("The Year %d is a NOT Leap Year.\n",y);
    }
    return 0;
}