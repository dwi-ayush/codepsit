// write a c programe to sort an array by selection method (increasing order)
#include <stdio.h>
int main()
{
    int n;
    int t;

    
    printf("enter the number of element in the array :");
    scanf("%d", &n);
    int arry[n]; // yahn se [ke andar se 30 hata diya hai]
    printf("enter the element of an array\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]:", i);
        scanf("%d", &arry[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arry[i] > arry[j])
            {
                t = arry[i];
                arry[i] = arry[j];
                arry[j] = t; // yahn pe arr[t] ki jagah t kar diya h
            }
        }
    }
    printf("array after sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("arry[%d]:", i);
        printf("%d\n", arry[i]); // ek change yahan kiya hai \n laga diya hai
    }
    return 0;
}