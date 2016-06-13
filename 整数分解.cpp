#include <stdio.h>
int main()
{
	int N,i,start,end,flag=0;
	scanf("%d",&N);
	for(i=1;i<N;i++)
{
	int sum=0;
	start=i;
	sum=start;
	for(end=start+1;end<N;end++)
	{
		sum+=end;
		if(sum==N)
		{
			flag=1;
			printf("%d~%d\n",start,end);
		}
		else if(sum>N)
		break;
	}
}
if(flag==0)
printf("None\n");	
}
