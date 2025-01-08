#include <stdio.h>
#include <string.h>
int main()
{
    enum weekDay {mon,tue=3,wed,thur,fri,sat,sun};
    printf("%d %d %d %d",mon,tue,wed,thur);
}