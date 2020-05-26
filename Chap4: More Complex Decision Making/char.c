#include<stdio.h>
int main()
{
    char c;
    printf("Please Enter a Character: \n");
    scanf("%c",&c);
    if(c>=65 && c<=90)
        {
            printf("The Character is in Capital.\n");
        }
    if (c>=97 && c<=122)
    {
        printf("The Character is in Small.\n");
    }
    if (c>=48 && c<=57)
    {
        printf("The Character is in Numbers.\n");
    }
    if (c>=0 && c<=47 || c>=58 && c<=64 || c>=91 && c<=96 || c>=123 && c<=127)
    {
        printf("The Character is in Special Numbers.\n");
    }
    return 0;
}
