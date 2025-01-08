#include<stdio.h>
int main() {
int n,m,i,j,smallest=-1;
  scanf("%d",&n);
  int arr1[n];
  for(i=0;i<n;i++)
    scanf("%d",&arr1[i]);
 
   scanf("%d",&m);
  int arr2[m];
  for(j=0;j<m;j++)
    scanf("%d",&arr2[j]);
 
  for(i=0;i<n;i++){
    for(j=i;j<m;j++){
    if((arr1[i]==arr2[j]) && (smallest ==-1 || arr2[j]<smallest))
          smallest=arr1[i];
    }
   
  }
  printf("%d",smallest);
}