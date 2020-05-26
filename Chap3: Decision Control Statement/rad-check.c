#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,rad,d;
    printf("Enter value for Centre X1:\n");
    scanf("%f",&x1);
    printf("Enter value for Centre Y1:\n");
    scanf("%f",&y1);
    printf("Enter the Radius:\n");
    scanf("%f", &rad);
    printf("Enter value for X2:\n");
    scanf("%f",&x2);
    printf("Enter value for Y2:\n");
    scanf("%f",&y2);
    d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));

    if (d>rad)
    {
        printf("The point lies Outside the Circle.\n");
    }
    else
    {
        if (d==rad)
        {
             printf("The point lies On the Circle.\n");

        }
        else
        {
            printf("The point lies Inside the Circle.\n");

        }
        
    }
    
    return 0;
}