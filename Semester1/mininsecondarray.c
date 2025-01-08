#include <stdio.h>
void bubblesort(int * arr,int n){
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int size1;
    int size2;
    // printf("Enter size of array 1:");
    scanf("%d",&size1);
    int arr1[size1];
    // printf("Enter elements of array 1:");
    for (int i=0;i<size1;i++)
        scanf("%d",&arr1[i]);
    // printf("Enter size of array 2:");
    scanf("%d",&size2);
    int arr2[size2];
    // printf("Enter elements of array 2:");
    for (int i=0;i<size2;i++)
        scanf("%d",&arr2[i]);
    bubblesort(arr1,size1);
    int flag=-1;
    for (int i=0;i<size1;i++){
        for (int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                printf("%d",arr1[i]);
                flag=1;
                goto outer;
            }
        }
    }
    outer:
    if (flag==-1){
        printf("-1");
    }
    return 0;

}