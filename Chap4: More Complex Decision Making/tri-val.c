#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Please Enter Three Sides: \n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    max=a;
    if(b>a && b>c)
    max=b;
    if(c>a && c>b)
    max=c;
    if ((a+b)>max || (b+c) > max || (c+a) > max)
    {
        printf("The Triangle is Valid.\n");
    }
    else
    {
        printf("The Triangle is not valid.\n");
    }
    
    return 0;
}