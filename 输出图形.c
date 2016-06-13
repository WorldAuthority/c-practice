#include <stdio.h>
int main()
{
	char a;
	int n,i,j;
	scanf("%d %c",&n,&a);
	if(n==1)
	{
		printf("%c\n",a);
		return 0;
	}
	int max=(2*n-1)*2-1;
	char c[100][3];
	c[1][1]=a;
	for(i=2;i<=n-1;i++)
	{
		if(a=='Z')
		a='A';
		else a++;
		c[i][2]=a;
	}
	char cc[200];
	cc[n]=++a;
	for(i=n-1;i>=1;i--)
	{
		if(a=='Z')
		a='A';
		else a++;
		cc[i]=a;
	}
	for(i=n-1;i>=2;i--)
	{
		if(a=='Z')
		a='A';
		else a++;
		c[i][1]=a;
	}
max=max-2;
printf("%c",c[1][1]);
for(i=1;i<=max;i++)
printf(" ");
printf("%c\n",c[1][1]);
for(i=2;i<=n-1;i++)
{
	max-=4;
	printf("%c",c[i][1]);
	for(j=1;j<=2*i-3;j++)
	printf(" ");
	printf("%c",c[i][2]);
	for(j=1;j<=max;j++)
	printf(" ");
	printf("%c",c[i][2]);
	for(j=1;j<=2*i-3;j++)
	printf(" ");
	printf("%c\n",c[i][1]);
}
for(j=1;j<=n;j++)
printf("%c ",cc[j]);
for(j=n-1;j>=2;j--)
printf("%c ",cc[j]);
printf("%c\n",cc[j]);
}
