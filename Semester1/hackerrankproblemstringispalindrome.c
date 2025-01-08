#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char str[10000];
    char nstr[10000];
    fgets(str,10000,stdin);
    int counter=0;
    for (int i=0;str[i]!='\0';i++){
        int s=(int)str[i];
        if (((s>=65)&&(s<=90))||((s>=97)&&(s<=122))||(str[i]>='0'&&str[i]<='9'))
        {
            if ((s>=65)&&(s<=90))
                str[i]=(char)(s+32);
            nstr[counter]=str[i];
            counter++;
        }
            
    }
    nstr[counter]='\0';
    
    int flag=1;
    // printf("%s",nstr);
    for (int i=0;i<counter/2;i++){
        if (!(nstr[i]==nstr[counter-i-1])){
            flag=0;
            break;
        }
    }
    
    if(flag==1)
        printf("YES");
    else 
        printf("NO");
    return 0;
}
