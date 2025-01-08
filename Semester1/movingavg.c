#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d",&t);
    printf("%d\n",t);
    char str[1000];
    for (int i=0;i<t;i++){
        scanf("%[^\n]%*c",str);
        puts(str);
    }
    return 0;
}
