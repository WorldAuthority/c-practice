#include <stdio.h>
int f(int day,int n)
{
	if(day!=n)
	return 2*f(day+1,n)+2*day;
	else return 1;
}
int main()
{
	int n,a;
	scanf("%d",&n);
	a=f(1,n);
	printf("%d\n",a);
}
