#include <stdio.h>
int main(){
    int ch;
    int sum=0;
    do
    {
        ch = getchar();
        if (ch != ' ')
            sum+=ch-48;
    } while (ch != ' ');
    printf("sum = %d",sum);
    return 0;
}