#include <stdio.h>
int fibbo(int);
int main(){
    int ub;
    printf("Enter upper bound:");
    scanf("%d",&ub);
    printf("The fibbo series is :");
    for (int i=1;i<=ub;i++){
        printf("%d ", fibbo(i));
    }
    
    return 0;
}
int fibbo(int term){
    if (term<=2)
        return term-1;
    else
        return fibbo(term-1)+fibbo(term-2);
}