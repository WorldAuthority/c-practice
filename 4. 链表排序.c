/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */

#include "stdio.h"
#include "stdlib.h"

struct node
{	int data;
	struct node * next;
} ;

typedef struct node NODE;
typedef struct node * PNODE;
void outlist( PNODE );
void sortlist(PNODE h,int num);
int main ( )
{   int num=1;
	PNODE head;

	head = (PNODE)malloc( sizeof(NODE) );
	head->next = NULL;
	head->data = -1;

	while ( num!=0 )
	{  	scanf("%d", &num);
		if ( num!=0 )
			sortlist( head, num);
	}
	outlist( head );
	return 0;
}

void outlist( PNODE head )
{	PNODE p;
	p = head->next;
	while ( p != NULL )
	{	printf("%d\n", p->data);
		p = p->next;
	}
}
void sortlist(PNODE h, int num)
{
	PNODE p = h, n;

	n = (PNODE)malloc(sizeof(NODE));
	n->data = num;

	while (p->next != NULL && p->next->data < n->data)
			p = p->next;
	/* 如果链表中已经存在相等的数字，则直接返回 */
	if (p->next != NULL && p->next->data == n->data)
		return;

	/* 如果已经到了链表末端还没找到更大的数，则直接插入尾部 */
	if (p->next == NULL)
	{
		p->next = n;
		n->next = NULL;
	}
	else /* 未到链表末端，插到中间 */
	{
		n->next = p->next;
		p->next = n;
	}
}
/* This is an example for list. Please programme your code like it.
sortlist( PNODE h, int num )
{	PNODE p;
	p = (PNODE)malloc( sizeof(NODE) );
	p->data = num;
	p->next = h->next;
	h->next = p;
}
*/

/* PRESET CODE END - NEVER TOUCH CODE ABOVE */
