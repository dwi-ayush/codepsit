#include <stdio.h>
#include <stdlib.h>
int partition(int* arr, int left, int right);
void quickSort(int* arr, int left, int right);
void swap(int *a,int *b);
int main(){
	int n;
	printf("Enter the size:");
	scanf("%d",&n);
	int* arr = (int*)malloc(sizeof(int)*n);	
	printf("Enter the elements:");
	for (int i=0;i<n;i++) scanf("%d",arr+i);
	quickSort(arr,0,n-1);
	printf("Array elements after being sorted");
	for (int i=0;i<n;i++) printf("%d ",arr[i]);	
	printf("\n");
	return 0;	
}
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int partition(int* arr,int left, int right){
	int pivot = arr[right];
	int i=left-1;
	for (int j=left;j<=right;j++){
		if (pivot>=arr[j]){
			i++;
			if (j>i) swap(&arr[j],&arr[i]);
		}
	}	
	return i;
}
void quickSort(int*arr, int left, int right){
	if (left>=right) return;
	int part = partition(arr,left,right);
	quickSort(arr,left,part-1);
	quickSort(arr,part+1,right);
}
	

