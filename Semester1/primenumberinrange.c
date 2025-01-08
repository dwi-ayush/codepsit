#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isInvalid(int dx,int mx){
    if (mx==1 || mx==3 || mx==5 || mx==7 || mx==8 || mx==10 || mx==12 ){
        if (dx<=31 && dx>=1){
            return 0;
        }
        else 
            return 1;
    }
    else if (mx==4 || mx==6 || mx==9 || mx==11){
        if (dx<=30 && dx>=1){
            return 0;
        }
        else 
            return 1;
    }
    else if(mx == 2){
        if (dx<=28 && dx>=1){
            return 0;
        }
        else 
            return 1;
    }
    else {
        return 1;
    }
}
// int monthVal(int mx){
//     switch(mx){
//         case 1:
//             return 0;
//             break;
//         case 2:
//             return 3;
//             break;
//         case 3:
//             return 3;
//             break;
//         case 4:
//             return 6;
//             break;
//         case 5:
//             return 1;
//             break;
//         case 6:
//             return 4;
//             break;
//         case 7:
//             return 6;
//             break;
//         case 8:
//             return 2;
//             break;
//         case 9:
//             return 5;
//             break;
//         case 10:
//             return 0;
//             break;
//         case 11:
//             return 3;
//             break;
//         case 12:
//             return 5;
//             break;
//         default:
//             return -1;
//     }
// }
int centuryVal(int yx){
    int cen=yx/100;
    int cenValarr[]={2,0,6,4};
    int offset=cen-14;
    int val;
    if (offset>=0){
        val=cenValarr[offset%4];
    }
    else{
        val=cenValarr[4-((-offset)%4)];
    }
    return val;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int d,m,y;
    scanf("%d %d %d",&d,&m,&y);
    int monthVal[]={0,3,3,6,1,4,6,2,5,0,3,5};
    if (isInvalid(d,m)){
        printf("INVALID DATE");
        return 0;
    }
    else {
        // find week day block
        int addPartForm=d+monthVal[m-1]+centuryVal(y)+(y%100)+((y%100)/4);
        int weekNum=addPartForm%7;
        switch(weekNum){
            case 0:
                printf("SUNDAY");
                break;
            case 1:
                printf("MONDAY");
                break;
            case 2:
                printf("TUESDAY");
                break;
            case 3:
                printf("WEDNESDAY");
                break;
            case 4:
                printf("THURSDAY");
                break;
            case 5:
                printf("FRIDAY");
                break;
            case 6:
                printf("SATURDAY");
                break;
        }
    }
    return 0;
}

