#include <stdio.h>
#include <string.h>
struct student{
	char name[20];
	char num[5];
};
typedef struct student node;
int main()
{
	node p[20];
	int n,i,j,k=0;
	char input[30];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",input);
		for(j=0;j<strlen(input);j++)
		{
			if(input[j]!=',')
			p[i].name[j]=input[j];
			else break;
		}
		p[i].name[j]='\0';
		for(j=j+1;j<strlen(input);j++)
		p[i].num[k++]=input[j];
		p[i].num[k]='\0';
		k=0;
	}
	for(i=0;i<n-1;i++)
	{
		node temp;
		for(j=0;j<n-1-i;j++)
		if(strcmp(p[j].num,p[j+1].num)<0)
		{
			temp=p[j];
			p[j]=p[j+1];
			p[j+1]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s,%s\n",p[i].name,p[i].num);
	}
}
