#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the number of rows\n");
	scanf("%d",&n);
	int s=n-1;
	for(i=1;i<=n;i++)
	{
	for(k=1;k<=s;k++)
         printf("   ");
     s--;
    for(j=1;j<=(2*i-1);j++)
     {
	    if(j==1||j==(2*i-1))
         	printf(" * ");
        else
            printf("   ");	
    }
	printf("\n");	
    } 
    s=1;
    for(i=n-1;i>=1;i--)
	{
	for(k=1;k<=s;k++)
         printf("   ");
     s++;
    for(j=1;j<=(2*i-1);j++)
    {
    	if(j==1||j==(2*i-1))
         	printf(" * ");
        else
            printf("   ");
	}
	printf("\n");	
    }
}