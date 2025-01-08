#include <stdio.h>
#include <limits.h>
int main(){
              //0  1 2  3  4 5  6 7  8
    int arr1[]={2,-1,4,-3,-2,6,-1,9,-5};
    int sizearr1=sizeof(arr1)/sizeof(arr1[0]);
    printf("Array before any subarray calculation :\t");
    for (int i=0;i<sizearr1;i++){
        printf("%d, ",arr1[i]);
    }
    // for (int i=2;i<sizearr1;i++){
    //     int sfts=0;
    //     for (int j=0;j<=sizearr1-i;i++){
    //         int sum=0;
    //         for (int k=0;k<i;k++){
    //             sum+=arr1[j+k];
    //         }
    //         if (sfts<sum)
    //         sfts=sum;
    //     }
    //     printf("\n%d",sfts);
    // }
    int maxforallsize=INT_MIN;
    for (int sarrsize=2;sarrsize<sizearr1;sarrsize++){
        // printf("\nfor size %d:",sarrsize);
        int sum=INT_MIN;
        for (int i=0;i<=sizearr1-sarrsize;i++){
            int suminside=0;
            for (int k=0;k<sarrsize;k++){
                suminside+=arr1[i+k];
            }
            // printf("\n%d",suminside);
            if (suminside>sum)
            sum=suminside;
        }
        // printf("\nmax sum for size %d is %d",sarrsize,sum);
        if (maxforallsize<sum)
        maxforallsize=sum;
    }
    printf("\nfor all subarrays, the maximum subarray's sum is : %d",maxforallsize);

    return 0;
}