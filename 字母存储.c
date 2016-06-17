#include <stdio.h>
#include <stdlib.h>
struct zimu{
	char num;
	char str;
};
struct zimu translate[]=
{
	'0','a','1','b','2','c','3','d','4','c','5','b','6','a'
};
int main()
{
	char a;
	int i,j;
	scanf("%c",&a);
		if(a>='0'&&a<='6')
		{
			for(i=0;i<=6;i++)
			{
				if (translate[i].num==a)
				{
					printf("%c\n",translate[i].str);
					return 0;
				}
			}
		}
		else if(a>='a'&&a<='d')
		{
			for(i=6;i>=0;i--)
			{
				if (translate[i].str==a)
				{
					printf("%c\n",translate[i].num);
					return 0;
				}
			}
		}
		else
		printf("N\n");
}
