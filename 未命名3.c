#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE * pf;
	char name[20];
	scanf("%s",name);
	pf=fopen(name,"r");
	if(pf==NULL)
	{
		printf("File Name Error.\n");
		exit(0);
	}
	int n;
	scanf("%d",&n);
	char s[20];
	while(n--)
	{
		if(fgets(s,20,pf)==NULL)
		{
			pf=NULL;
			break;
		}
	}
	if(pf==NULL)
	printf("Line No Error.\n");
	else
	printf("%s",s);
}
