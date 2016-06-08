#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
struct king{
	char ID[21];
	char num[10001];
	int len;
	struct king* next;
};
typedef struct king node;
typedef struct king * pnode;
void out(pnode h);
void sort(pnode h,pnode p);
int main()
{
	int n,i;
	scanf("%d",&n);
	pnode people;
	pnode head=(pnode)malloc(sizeof(node));
	head->next=NULL;
	head->len=10000;
	for(i=0;i<n;i++)
	{
		people=(pnode)malloc(sizeof(node));
		scanf("%s",people->ID);
		scanf("%s",people->num);
		people->next=NULL;
		people->len=strlen(people->num);
		sort(head,people);
	}
	out(head);
}
void sort(pnode h,pnode p)
{
	pnode q;
	q=h;
	h=h->next;
	while(h!=NULL)
	{   
		if(h->len>p->len||((h->len==p->len)&&(strcmp(h->num,p->num)>0))||((h->len==p->len)&&(strcmp(h->num,p->num)==0)&&(strcmp(h->ID,p->ID)<0)))
	{  
	    q=h;
		h=h->next;
	}
		else break;
	}
	if(q!=NULL){
	
	if(q->next!=NULL)
	{
		p->next=q->next;
		q->next=p;
	}
	else
	{
		q->next=p;
	}
}
else q->next=p;
}
void out(pnode h)
{
	pnode p;
	p=h->next;
	while(p!=NULL)
	{
		printf("%s\n",p->ID);
		p=p->next;
	}
}
