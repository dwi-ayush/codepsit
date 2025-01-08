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
	for (int i=1;i<n;i++){
		int j=i-1;
		int key = arr[i];
		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
	printf("The sorted array is:");
	for (int i=0;i<n;i++){	
		printf("%d ",arr[i]);
	}
	return 0;
}

	
