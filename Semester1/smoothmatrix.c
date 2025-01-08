#include <stdio.h>
int main(){
  int d,s;
  scanf("%d %d",&d,&s);
  int mat[d][d],smat[d][d];
  for (int i=0;i<d;i++){
    for (int j=0;j<d;j++){
      scanf("%d",&mat[i][j]);
    }
  }
  for (int i=0;i<d;i++){
    for (int j=0;j<d;j++){
      int sum=0;
      int cbb=j-s,cbh=j+s,rbb=i-s,rbh=i+s;
      if (i-s<0){
        rbb=0;
      }
      if (i+s>=d){
        rbh=d-1;
      }
      if (j-s<0){
        cbb=0;
      }
      if (j+s>=d){
        cbh=d-1;
      }
      for (int k=rbb;k<=rbh;k++){
        for (int l=cbb;l<=cbh;l++){
          sum+=mat[k][l];
        }
      }
      smat[i][j]=sum;
    }
  }
  for (int i=0;i<d;i++){
    	for (int j=0;j<d;j++){
      		printf("%d",smat[i][j]);
            if (!(i==d-1 && j==d-1))
            printf(" ");
    	}
        if(i!=d-1){
        printf("\n");
        }
  	}
  return 0;
}