/* airport security officials have confiscated several item of the passengers
 at the security check point. ALl the items have been dumped inot a huge box (array)
 each item possesses a certain ammount of risk [0,1,2] here the risk severity of the items
  represenet an array  of n number of integer values the task here is to sort the items 
  based on their levels of risk in the array. the risk values of range from 0 to 2.
*/


#include <stdio.h>
int main(){
    int digit;
    int ze=0,oe=0,te=0;
    while(scanf("%d",&digit),digit!=-1){
        if (digit==0)
        ze++;
        else if(digit==1)
        oe++;
        else if(digit==2)
        te++;
    }
    while(ze--){
        printf("0 ");
    }
    while(oe--){
        printf("1 ");
    }
    while(te--){
        printf("2 ");
    }
}

