#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Please Enter three sides of a Triangle: \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a*a+b*b==c*c)
        printf("The Triangle is Right Angle.\n");
    else if (a==b && b==c)
    {
        printf("The Triangle is Equilateral.\n");
    }
    else if((a==b && a!=c) || (b==c && b!=a) || (a==c && a!=b))
        printf("The Triangle is Isosceles.\n");
    else
    {
        printf("The Triangle is Scalene.\n");
    }
    return 0;  
    
}