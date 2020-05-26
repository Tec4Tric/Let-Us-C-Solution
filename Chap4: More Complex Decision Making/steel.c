#include<stdio.h>
int main()
{
    float hn,cc,ts;
    printf("Please enter the values of Hardness, Carbon Content, Tensile Strength.\n");
    scanf("%f%f%f", &hn,&cc,&ts);
    if (hn>50 && cc <0.7 && ts<5600)
    {
        printf("Grade 10.\n");
    }
    else if (hn>50 && cc <0.7)
    {
        printf("Grade 9.\n");
    }
    else if (cc <0.7 && ts<5600)
    {
        printf("Grade 8.\n");
    }
    else if (hn>50 && ts<5600)
    {
        printf("Grade 7.\n");
    }
    else if (hn>50 || cc <0.7 || ts<5600)
    {
        printf("Grade 6.\n");
    }
    else
    {
        printf("Grade 5.\n");
    }
}