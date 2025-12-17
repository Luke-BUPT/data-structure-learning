#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	int data;
	struct node* next;	
}node;

typedef struct stack{
	node* ptop;
	node* pbottom;	
}stack;

void init(stack* ps){
	ps->ptop=(node*)malloc(sizeof(node));
	ps->pbottom=ps->ptop;
}

void push(stack* ps,int val){
	node* newnode=(node*)malloc(sizeof(node));
	newnode->data=val;
	newnode->next=ps->ptop;
	ps->ptop=newnode;
	return;
	}

void traverse(stack* ps){
	node *pnode=ps->ptop;
	while(pnode!=ps->pbottom){
		printf("%d ",pnode->data);
		pnode=pnode->next;
	}
	
}

void pop(stack* ps){
	node* r=ps->ptop;
	ps->ptop=r->next;
	printf("%d\n",r->data);
	free(r);
	r->next=NULL;
}

void clear(stack* ps){
	node* p,*q;
	p=ps->ptop;
	q=p->next;
	while(p!=ps->pbottom){
		free(p);
		p=q;
		q=q->next;
	}
	ps->ptop=ps->pbottom;
}

int main(){
	stack p;
	init(&p);
	push(&p,1);
	push(&p,2);
	push(&p,3);
	push(&p,4);
	traverse(&p);
	printf("\n");
	pop(&p);
	traverse(&p);
	printf("\n");
	clear(&p);
	traverse(&p);
	return 0;
}

