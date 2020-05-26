#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three Numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c?printf("%d is bigger.\n",a):(b>c && b>a)?(printf("%d is bigger.\n",b)):(c>a && c>b)?printf("%d is bigger.\n",c):printf("\n"))
     printf("\n");
    return 0;
}