#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;

};
struct node* init(){
	struct node* head=malloc(sizeof(struct node));
	head->data=-1;
	head->next=NULL;
	struct node* prear=head;
	int val;
	while(1){
		scanf("%d",&val);
		if(val==-1)
			break;
		struct node *newnode=malloc(sizeof(struct node));
		newnode->data=val;
		newnode->next=NULL;
		prear->next=newnode;
		prear=newnode;
	}
	return head;
}
void foreach(struct node*head){
	struct node *current=head->next;
	while(current!=NULL){
	printf("%d ",current->data);
	current=current->next;
	}
}
struct node* insertnode(struct node*head,int oldval,int newval){
	struct node* prev=head;
	struct node* current=prev->next;
	while(current!=NULL){
		if(current->data==oldval)
			break;
		current=current->next;
		prev=prev->next;
		
	}
	if(current==NULL){
	struct node* newnode=malloc(sizeof(struct node));
	newnode->data=newval;
	newnode->next=NULL;
	prev->next=newnode;
	}
	struct node* newnode=malloc(sizeof(struct node));
	newnode->data=newval;
	newnode->next=current;
	prev->next=newnode;
	return head;
}


void freenode(struct node* head){
	struct node* pcurrent=head->next;
	while(pcurrent!=NULL){
	struct node* pnext=pcurrent->next;
	free(pcurrent);
	pcurrent=pnext;
	}
	head->next=NULL;
	
}
int main(){
	struct node* head=init();
	foreach(insertnode(head,5,4));
	freenode(head);
	return 0;
	}
