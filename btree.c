#include <stdio.h>
#include <stdlib.h>
typedef struct btnode{
	char data;
	struct btnode* pleft;
	struct btnode* pright;
}btnode;

btnode* creatbt(){
	btnode* pA=(btnode*)malloc(sizeof(btnode));
	btnode* pB=(btnode*)malloc(sizeof(btnode));
	btnode* pC=(btnode*)malloc(sizeof(btnode));
	btnode* pD=(btnode*)malloc(sizeof(btnode));
	btnode* pE=(btnode*)malloc(sizeof(btnode));
	pA->data='A';
	pB->data='B';
	pC->data='C';
	pD->data='D';
	pE->data='E';
	pA->pleft=pB;
	pA->pright=pC;
	pB->pleft=NULL;
	pB->pright=NULL;
	pC->pleft=pD;
	pC->pright=NULL;
	pD->pleft=NULL;
	pD->pright=pE;
	pE->pleft=NULL;
	pE->pright=NULL;
	return pA;
}

void prebtnode(btnode *pA){
	printf("%c ",pA->data);
	if(pA->pleft!=NULL)
		prebtnode(pA->pleft);
	if(pA->pright!=NULL)
		prebtnode(pA->pright);
}


int main(){
	btnode* pA=creatbt();
	prebtnode(pA);
	return 0;
}
