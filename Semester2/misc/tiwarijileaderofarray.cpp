// write a c++ programe to check leader of an array 
#include<iostream>
#include<cstdio>
#include<stdlib.h>
using namespace std;
void leader(int *arr , int size);
int main ()
{
    int n ;
    printf("enter the array elemnt \n");
    scanf("%d",&n);
    int *arr;
    arr=(int*)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]:",i);
        cin>>arr[i];
    }
   
    leader(arr,n);
    

 return 0;
}
void leader(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int j;
        for ( j = i+1; j < size; j++)
        {
            if (*(arr+i) <= *(arr+j))
            {
                break;
            }
            
        }
        if (j==size)
        {
            
            cout<< *(arr+i) << " ";
        }
        
        
    }

}