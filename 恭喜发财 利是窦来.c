#include <stdio.h>
#include <string.h>
struct people{
	char name[20];
	int money;
};
int main()
{
	struct people kids[20];
	int N,i,j;
	scanf("%d",&N);
	int NN=N;
	for(i=1;i<=N;i++)
	{
		scanf("%s",kids[i].name);
		kids[i].money=0;
	}
	char input[20],ch[20];
	while(N--)
	{
		int m,n;
		scanf("%s",input);
		scanf("%d%d",&m,&n);
		if(m==0)
		{getchar();
			for(i=1;i<=n;i++)
			gets(ch);
			continue;
		}
		for(i=1;i<=NN;i++)
		{
			if(strcmp(input,kids[i].name)==0)
			{
				kids[i].money-=m-m%n;
				break;
			}
		}
		for(i=1;i<=n;i++)
		{
			scanf("%s",input);
			for(j=1;j<=NN;j++)
			{
				if(strcmp(input,kids[j].name)==0)
				{
					kids[j].money+=m/n;
					break;
				}
			}
		}
	}
	for(i=1;i<=NN;i++)
	printf("%s %d\n",kids[i].name,kids[i].money);
}
