#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Enter the size of the string:");
    int n;
    scanf("%d",&n);
    char * str= (char*)malloc(sizeof(char)*(n+1));
    printf("Enter the string:");
    scanf("\n");
    scanf("%[^\n]%*c",str);
    // printf("%s\n",str);
    for (int i=0;str[i]!='\0';i++){
        if (str[i]>=65 && str[i]<=90){
            str[i]+=97-65;
        }
    }
    int vowelcount=0;
    char vowels[]="aeiou";
    for (int i=0;str[i]!=0;i++){
        for (int j=0;j<5;j++){
            if(str[i]==vowels[j]){
                vowelcount++;
            }
        }
    }
    printf("Number of Vowels in String:%d",vowelcount);
}