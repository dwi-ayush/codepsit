#include <stdio.h>
#include <stdlib.h>
void swap(int* a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int* arr;
	int n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	arr = (int*)malloc(sizeof(int)*n);
	printf("Enter array elements:");
	for (int i=0;i<n;i++) scanf("%d",arr+i);
	for (int i=0;i<n-1;i++){
		for (int j=0;j<n-i-1;j++){
			if (arr[j] > arr[j+1]){
				swap(arr+j,arr+j+1);
			}
		}
	}
	printf("The sorted array is:");
	for (int i=0;i<n;i++){	
		printf("%d ",arr[i]);
	}
	return 0;
}

	
