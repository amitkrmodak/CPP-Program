#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int *arr,n,i,key;
    printf("\n Enter array size:");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
	printf("\n Enter array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("\n Enter Key element:");
	scanf("%d",&key);
	i=lsearch(arr,n,key);
	if(i)
		printf("\n Key element found..");
	else
		printf("\n Not found");
	return 0;
}
int lsearch(int arr[],int n,int key){
	
	int i,found=0;
	for(i=0;i<n;i++){
		if(arr[i]==key){
			found=1;
			break;
		}
	}
	return(found);	
}
