#include <stdio.h>
int main(){
    int n=7;
    int arr[n];
    for (int i=0;i<n;i++){
        printf("Enter element arr[%d]:",i);
        int ele;
        scanf("%d",&ele);
        arr[i]=ele;
    }
    int key=5;
    int i;
    int flag=0;
    for (i=0;i<n;i++){
        if (arr[i]==key)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
        printf("Key element  %d is found at arr[%d]",key,i);
    else
        printf("Key element %d is not found in the array",key);

}