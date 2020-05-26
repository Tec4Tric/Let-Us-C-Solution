#include<stdio.h>
int main()
{
    char c,a;
    printf("Please Enter a Character: \n");
    scanf("%c",&c);
    a=(c>=0 && c<=47 || c>=58 && c<=64 || c>=91 && c<=96 || c>=123 && c<=127)?printf("The character is a Special Symbol.\n") : printf("The character is not a Special Symbol.\n");
    return 0;
}