#include<stdio.h>
int main()
{
	int s,r,a;
	printf("Enter the Age of Shyam: \n");
	scanf("%d", &s);
	printf("Enter the Age of Ram: \n");
	scanf("%d", &r);
	printf("Enter the Age of Ajay: \n");
	scanf("%d", &a);
	if(s<r)
		if(s<a)
			printf("Shyam is younger.\n");
	if(r<s)
		if(r<a)
			printf("Ram is younger.\n");
	else
		printf("Ajay is younger.\n");
	return 0;


}
