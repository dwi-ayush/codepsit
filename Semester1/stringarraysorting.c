#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    printf("Enter the number of strings:");
    int nos;
    scanf("%d",&nos);
    char **strArr=(char**)malloc(sizeof(char*)*nos);
    for (int i=0;i<nos;i++){
        printf("Enter the length of string[%d]:",i+1);
        int sl;
        scanf("%d",&sl);
        *(strArr + i) = (char*)malloc(sizeof(char)*(sl+1));
        printf("Enter the string[%d]:",i+1);
        scanf("\n");
        scanf("%[^\n]",*(strArr+i));
        // puts(*(strArr+i));
    }
    for (int i=0;i<nos-1;i++){
        for (int j=0;j<nos-i-1;j++){
            if(strcmp(*(strArr+j),*(strArr+j+1))==1){
                char * temp;
                strcpy(temp,*(strArr+j));
                strcpy(*(strArr+j),*(strArr+j+1));
                strcpy(*(strArr+j+1),temp);
            }
        }
    }
    for (int i=0;i<nos;i++){
        puts(*(strArr+i));
    }
}