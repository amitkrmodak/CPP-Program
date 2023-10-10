#include<stdio.h>
#include<stdlib.h>
int binary_search(int a[],int lb,int ub,int key);
void getdata(int a[],int n);
void display(int a[],int n);
int main()
{
	int *a,*b,m,n,key,status;
	printf("\n Enter first array size:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	getdata(a,n);
	printf("\n Array elements are:");
	display(a,n);
	printf("\n Enter Key value:");
	scanf("%d",&key);
	status=binary_search(a,0,n-1,key);
	if(status<0)
		printf("\n Key not found..");
	else
		printf("\n Key element %d found at index %d",key,status);
	return 0;
}

void getdata(int a[],int n){
	
	int i;
	printf("\n Enter array elementsin ascending order:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void display(int a[],int n){
	
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}
int binary_search(int a[],int lb,int ub,int key){
	
	int mid;
	if(lb>ub)
		return(-1);
	mid=(lb+ub)/2;
	if(a[mid]==key)
		return(mid);
	else if(a[mid]<key)
		return binary_search(a,mid+1,ub,key);
	else
		return binary_search(a,lb,mid-1,key);
		
}
