#include <stdio.h>
#include <string.h>
void reduceString(char * str){
    int flag=1;
    int length=strlen(str);
    for (int i=0;i<length-1;i++){
        if (str[i]==str[i+1]){
            for (int k=i+2;k<=length;k++){
                str[k-2]=str[k];
                flag=0;
            }
            length-=2;
        }
    }
    if(flag==0){
        reduceString(str);
    }
    else{
        if(length==0){
            puts("Empty String");
        }
        else{
            puts(str);
        }
    }
}
int main(){
    char str[101];
    scanf("%[^\n]",str);
    reduceString(str);
    return 0;
}