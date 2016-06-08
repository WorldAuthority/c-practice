#include <stdio.h>
#include <string.h>
struct king{
	char ID[21];
	char num[10001];
	int len;
	struct king* next;
}p[1000];
typedef struct king node;
typedef struct king* pnode;
void sort(pnode h);
int main()
{
	pnode head;
	head=(pnode)malloc(sizeof(node));
	head->next=NULL;
	head->len=10001;
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",p[i].ID);
		scanf("%s",p[i].num);
		p[i].len=strlen(p[i].num);
		sort(head,p[i])
	}
	
}
void sort(pnode h,node p[i])
{
	pnode t=h,temp=(pnode)malloc(sizeof(node));
	p[i]->next=NULL;
	while(t->next!=NULL)
	{
		if(t->next->len>p[i]->len)
		t=t->next;
		else if(t->next->len==p[i]->len)
		{
			if(strcmp(t->next->num,p[i]->num)>=0)
			t=t->next;
		}
	}
	
	t=t->next;
	t->next=
}
