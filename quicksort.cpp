#include <stdio.h>
#include <stdlib.h>
int findpos(int *arr,int left,int right){
	int val=arr[left];
	int pos;
	while(left<right){
		while(*(arr+right)>=val&&left<right)
			right--;
		if(*(arr+right)<val){
	
			*(arr+left)=arr[right];
			
			}
		while(arr[left]<=val&&left<right)
			left++;
		if(arr[left]>val){
		
			arr[right]=arr[left];
			
			}

			
	}
			if(left==right){
			arr[left]=val;
			return left;
		}
	
}


void quicksort(int *arr,int left,int right){
	if(left<right){
	int pos=findpos(arr,left,right);
	quicksort(arr,left,pos-1);
	quicksort(arr,pos+1,right);
	}
}



int main(){
	int len;
	scanf("%d",&len);
	int *arr =(int *)malloc(sizeof(int)*len);
	int i;
	for(i=0;i<len;i++){
		scanf("%d",&arr[i]);
	}
	quicksort(arr,0,len-1);
	for(i=0;i<len;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
