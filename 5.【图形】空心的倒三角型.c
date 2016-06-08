#include <stdio.h>
int main()
{
	int h,i,j;
	scanf("%d",&h);
	for(i=1;i<2*h;i++)
	printf("*");
	printf("\n");
	for(i=2;i<h;i++)
	{
		for(j=1;j<=i-1;j++)
		printf(" ");
		printf("*");
		for(j=1;j<=2*h-2*(i-1)-3;j++)
		printf(" ");
		printf("*\n");
	}
	for(j=1;j<=h-1;j++)
	printf(" ");
	printf("*\n");
}
