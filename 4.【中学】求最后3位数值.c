#include <stdio.h>
int main()
{
	int a,n,i,flag=0;
	scanf("%d%d",&a,&n);
	int sum=1;
	for(i=0;i<n;i++)
	{
		sum*=a;
		if(sum>=1000)
		{
			flag=1;
			sum=sum%1000;
		}
	}
	if(flag==1) printf("The last 3 numbers is %03d.\n",sum);
	else printf("The last 3 numbers is %d.\n",sum);
}
