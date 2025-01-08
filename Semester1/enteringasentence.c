#include <stdio.h>
int main(){
    char str[1000]; // character ka array, jo ki ek string hai, aur iski length 1000 kar di hai
    printf("type a sentence: ");
    scanf("%[^\n]%*c",str);
    printf("the sentence you entered is : %s",str);
    return 0;
}