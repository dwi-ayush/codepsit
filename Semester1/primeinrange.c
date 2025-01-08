#include <stdio.h>
int main(){
    int start,end,count,temp,prime,num;
    
    printf("Enter the range :\n");
    scanf("%d %d",&start,&end);
    if(start>end)
    {
        temp=start;
        start=end;
        end=temp;
    }
    printf("The prime numbers in the given range %d and %d are:\n ",start,end);
    for(num=start;num<=end;num++)
    {
        prime=1;
        for(count=2;count<num;count++)
        {
            if(num%count==0)
            {
                prime=0;
                break;
            }
        }
        if(prime) 
            printf("%d\t",num);
    }
}