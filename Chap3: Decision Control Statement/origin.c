#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter value for X:\n");
    scanf("%d",&x);
    printf("Enter value for Y:\n");
    scanf("%d",&y);
    if (x==0 && y==0)
    {
        printf("The point lies on the Origin.\n");
    }
    if (x==0 && y!=0)
    {
        printf("The point lies on the Y-axis.\n");
    }
    if (x!=0 && y==0)
    {
        printf("The point lies on the X-axis.\n");
    }
    if (x!=0 && y!=0)
    {
        printf("The point lies on the Plane having co-ordinates (%d,%d).\n", x,y);
    }
    
    return 0;
}