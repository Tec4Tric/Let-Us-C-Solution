#include<stdio.h>
int main()
{
    float x1,x2,x3,y1,y2,y3,a,b;
    printf("Enter value for X1:\n");
    scanf("%f",&x1);
    printf("Enter value for Y1:\n");
    scanf("%f",&y1);
    printf("Enter value for X2:\n");
    scanf("%f",&x2);
    printf("Enter value for Y2:\n");
    scanf("%f",&y2);
    printf("Enter value for X3:\n");
    scanf("%f",&x3); 
    printf("Enter value for Y3:\n");
    scanf("%f",&y3);
    a=(y2-y1)/(x2-x1);
    b=(y3-y1)/(x3-x1);
    if (a==b)
    {
        printf("They fall in the same straight line.\n");
    }
    else
    {
         printf("They DON'T fall in the same straight line.\n");

    }
    
    return 0;
}