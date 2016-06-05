#include <stdio.h>
int main()
{
	int n,i,j,flag=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		printf("  ");
		for(j=1;j<=i;j++)
		printf("%-2d",n--);
		if(i==1) n--;
		n=n+2;
		for(j=1;j<i;j++)
		{
			printf("%-2d",n++);
			flag=1;
		}
		if(flag==1)
		{
			n--;
			flag=0;
		}
		printf("\n");
	}int nn=n;
	for(i=1;i<n;i++)
	{
		for(j=1;j<=i;j++)
		printf("  ");
		for(j=1;j<=nn-i;j++)
		printf("%-2d",n--);
		n+=2;
		for(j=1;j<nn-i;j++)
		printf("%-2d",n++);
		n--;
		printf("\n");
	}
}
