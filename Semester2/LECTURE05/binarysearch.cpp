#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of Array:";
    cin>>size;
    int arr[size];
    int low=0;
    int high=size-1;
    int mid=(low+high)/2;
    for (int i=low;i<=high;i++){
        cout<<"Enter the element at index "<<i<<" :";
        cin>>arr[i];
    }
    int key;
    cout<<"Enter element to find:";
    cin>>key;
    for (int i=low;i<=high-1;i++){
        if(arr[i]>arr[i+1]){
            cout<<"Binary search could not be implemented";
            return 0;
        }
    }
    int flag=0;
    while(low<high){
        if(arr[mid]==key){
            cout<<"Element found at index "<<mid<<endl;
            flag=1;
            break;
        }
        else if (key<arr[mid]){
            high=mid-1;
            mid=(low+high)/2;
        }
        else if(key>arr[mid]){
            low=mid+1;
            mid=(low+high)/2;
        }
    }
   if(flag==0){
    cout<<"Element not found!";
   }
}