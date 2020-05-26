#include<stdio.h>
int main()
{
    float b,l,area,perimeter;
    printf("Enter the bredth of a Rectangle: \n");
    scanf("%f", &b);
    printf("Enter the length of a Rectangle: \n");
    scanf("%f", &l);
    area=l*b;
    perimeter=2*(l+b);
    if(area>perimeter)
        printf("Area is Higher.\n");
    else
    {
        printf("Area is NOT Higher.\n");
    }
    return 0;
}