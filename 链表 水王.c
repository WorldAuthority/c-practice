#include <stdio.h>
#include <string.h>
struct king{
	char ID[21];
	char num[10001];
	int len;
	struct king* next;
};
typedef struct king node;
typedef struct king* pnode;
sort(pnode h,pnode p);
int main()
{
	int N,i;
	scanf("%d",&N);
	pnode head=(pnode)malloc(sizeof(node));
	head->next=NULL;
	head->len=10001;
	pnode people;
	for(i=0;i<N;i++)
	{
		people=(pnode)malloc(sizeof(node));
		scanf("%s",people->ID);
		scanf("%s",people->num);
		people->len=strlen(people->num)
		people->next=NULL;
		sort(head,people);
	}
}
sort(pnode h,pnode p)
{
	if(h!=NULL)
	{
		if(h->len>p->len||((h->len==p->len)&&(strcmp(h->num,p->num)>0))||((h->len==p->len)&&(strcmp(h->num,p->num)==0)&&(strcmp(h->ID,p->ID)<0)))
		
	}
}
