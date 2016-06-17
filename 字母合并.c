#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char str[20],str1[10],str2[10],temp;
	gets(str1);
	gets(str2);
	int i,j=0,k;
	for(i=0;i<strlen(str1);i++)
	{
		if(str1[i]==' ')
		continue;
		else
		str[j++]=str1[i];
	}
	for(i=0;i<strlen(str2);i++)
	{
		if(str2[i]==' ')
		continue;
		else
		str[j++]=str2[i];
	}
	str[j]='\0';
	for(i=0;i<j-2;i++)
	{
		for(k=0;k<j-2-i;k++)
		{
			if(str[k]>str[k+1])
			{
				temp=str[k];
				str[k]=str[k+1];
				str[k+1]=temp;
			}
			else if(str[k]==str[k+1])
			str[k]='0';
		}
	}
	for(i=0;i<j-1;i++)
	{
		if(str[i]=='0')
		continue;
		else
		printf("%c ",str[i]);
	}
	printf("%c\n",str[i]);
}
