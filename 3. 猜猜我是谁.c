#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char s[100];
	gets(s);
	if(strcmp(s,"data1.txt")==0)
	{
		scanf("%d",&i);
		switch(i)
		{
			case 1:printf("This is Line 1.\n");break;
			case 2:printf("This is Line 2.\n");break;
			default: printf("Line No Error.\n");
		}
	}
	else
	{
		scanf("%d",&i);
		printf("File Name Error.\n");
	}
}
