#include<stdio.h>
int main()
{
    char c,a;
    printf("Please Enter a Character: \n");
    scanf("%c",&c);
    a=(c>=97 && c<=122)?printf("The character is in Lower case.\n") : printf("The character is not in Lower case.\n");
    return 0;
}