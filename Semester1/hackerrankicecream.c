#include <stdio.h>
#include <stdlib.h>
int main(){
    int iter;
    scanf("%d",&iter);
    for (int i=0;i<iter;i++){
        int money;
        scanf("%d",&money);
        int size;
        scanf("%d",&size);
        int *arr;
        arr=(int*)malloc(sizeof(int)*size);
        for (int i=0;i<size;i++){
            scanf("%d", &arr[i]);
        }
        for (int i=0;i<size;i++){
            for (int j=1;j<size;j++){
                if (arr[i]+arr[j]==money){
                    printf("%d %d\n",i+1,j+1);
                    goto out;
                }
            }
        }
        out:
        return 0;
    }
}