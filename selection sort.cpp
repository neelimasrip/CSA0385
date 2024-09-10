#include<stdio.h>
void selectionsort(int arr[],int n){
	int i,j,minindex,temp;
	for(i=0;i<n;i++){
		minindex=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[minindex]){
				minindex=j;
			}
		}
		temp=arr[minindex];
		arr[minindex]=arr[i];
		arr[i]=temp;
	}
}
int main(){
	int arr[]={1,4,2,6,3,7,8,10,9,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	selectionsort(arr,n);
	printf("sorted array:\n");
	for(int i=0;i<n;i++){
		printf(" %d ",arr[i]);
	}
	return 0;
}
