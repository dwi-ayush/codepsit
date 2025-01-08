#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int partition(int* arr, int left, int right){
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
int main(){
	int* arr;
	int n;
	printf("Enter the size of input array:");
	scanf("%d",&n);
	arr = (int*)malloc(sizeof(int)*n);
	printf("Enter array elements:");
	for (int i=0;i<n;i++) scanf("%d",&arr[i]);
	quickSort(arr,0,n-1);
	printf("the sorted array is : ");
	for (int i=0;i<n;i++) printf("%d ",arr[i]);
	return 0;	
}
