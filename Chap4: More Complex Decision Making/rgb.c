#include<stdio.h>
int main()
{
    float r,g,b,w,c,m,y,k;
    printf("Enter the values of the R,G,B Colours:\n");
    scanf("%f%f%f", &r,&g,&b);
    r=r/255;
    g=g/255;
    b=b/255;
    if(r>g && r> b)
        w=r;
    if(g>r && g> b)
        w=g;
    if(b>r && b> g)
        w=b;
    c=(w-r)/w;
    m=(w-g)/w;
    y=(w-b)/w;
    k=1-w;
    printf("The RGB converts to CMYK colour is %.2f, %.2f, %.2f, %.2f \n",c,m,y,k);
    return 0;
}