#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct emp{
    char id[20];
    char name[100];
    char desi[100];
    char dep[100];
    int sal;
} e;
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int ne;
    scanf("%d",&ne);
    e empl[ne];
    for (int i=0;i<ne;i++){
        scanf("%s",empl[i].id);
        scanf("%s",empl[i].name);
        scanf("%s",empl[i].desi);
        scanf("%s",empl[i].dep);
        scanf("%d",&empl[i].sal);
        // printf("%s <- dep",empl[i].dep);
    }
    char ss[100];
    int sal;
    scanf("%s",ss);
    scanf("%d",&sal);
    for (int i=0;i<ne;i++){
        // printf("%s <- dep",empl[i].dep);
        // printf("%s %s",empl[i].dep,ss);
        if (strcmp(ss,empl[i].dep)==0 && empl[i].sal>=sal){
            e f=empl[i];
            printf("%s %s %s %s %d",f.id,f.name,f.desi,f.dep,f.sal);
        }
    }
    return 0;
}
