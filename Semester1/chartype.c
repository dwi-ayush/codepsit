#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char ch;
    scanf("%c",&ch);
    printf("%d\n",(int)ch);
    if((97<=(int)ch && 122>=(int)ch )||( 65<=(int)ch && 90>=(int)ch)){
        switch(ch){
            case 'a':
                printf("VOWEL");
                break;
            case 'e':
                printf("VOWEL");
                break;
            case 'i':
                printf("VOWEL");
                break;
            case 'o':
                printf("VOWEL");
                break;
            case 'u':
                printf("VOWEL");
                break;
            case 'A':
                printf("VOWEL");
                break;
            case 'E':
                printf("VOWEL");
                break;
            case 'I':
                printf("VOWEL");
                break;
            case 'O':
                printf("VOWEL");
                break;
            case 'U':
                printf("VOWEL");
                break;
            default:
                printf("CONSONANT");
                break;
        }
    }
    else if((0<=(int)ch) && (9>=(int)ch)){
        printf("DIGIT");
    }
    else {
        printf("SPECIAL SYMBOL");
    }
    return 0;
}
