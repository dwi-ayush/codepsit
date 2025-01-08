// Find out the maximum Subarray of the given array.
// Approach 1.
#include<stdio.h>
int main()
{
    int n,i,j,x,y,sum=0,max=sum;
    printf("Enter The Size of The array: ");
    scanf("%d",&n);
    //2,-1,4,-3,-2,6,-1,9,-5
    int arr[n];
    printf("Enter The Elements of the array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    for(i=0;i<n;i++)
    {
        if(arr[i]<=0)
        continue;
        sum=0;
        for(j=i;j<n;j++)
        {
            sum=sum+arr[j];
            
            if(max<sum)
           {
                 max=sum;
                 x=i;
                 y=j;
           }
            else
            continue;
        }
    }
    printf("The Subarray with maximum sum of %d is:\n",max);
    for(i=x;i<=y;i++)
    {
        printf("%d,",arr[i]);
    }
    return 0;
}