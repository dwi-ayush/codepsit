#include <stdio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the number of rows\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	for(k=2;k<(n+1-i);k++)
         printf(" ");
    for(j=1;j<=(2*i-1);j++)
    {
	if (j==1 || j==(2*i-1))
	    printf("*");
    else
	    printf(" ");
	}
	printf("\n");	
    } 
    
    for(i=n-2;i>=1;i--)
	{
	for(k=2;k<(n+1-i);k++)
         printf(" ");
    for(j=1;j<=(2*i-1);j++)
    {
	if (j==1 || j==(2*i-1))
	    printf("*");
    else
	    printf(" ");
	}
	printf("\n");	
    } 
}