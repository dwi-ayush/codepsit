#include<stdio.h>
#include<string.h>
int main ()
{
    char str[1000];
    scanf("%s",str);
   
    int count=1;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>=65 && str[i]<=90)
        {
            count ++;
        }
        i++ ;
    }
    printf("%d",count);
}