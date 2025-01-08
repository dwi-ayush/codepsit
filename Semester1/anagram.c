#include <stdio.h>
int main(){
    char f1[128]={};
    char f2[128]={};
    int size;
    scanf("%d",&size);
    char w1[size];
    char w2[size];
    scanf("%s",w1);
    scanf("%s",w2);
    for (int i=0;i<size;i++){
        f1[(int)w1[i]]++;
        f2[(int)w2[i]]++;
    }
    int flag=0;
    for (int i=0;i<128;i++){
        if(f1[i]!=f2[i])
        {
            flag=1;
            break;
        }
    }
    if (flag==0){
        printf("1");
    }
    else{
        printf("0");
    }
}