
#include <iostream>
using namespace std;
int fact(int n){
    if (n<2){
        return 1;
    }
    int k=1;
    for (int i=1;i<=n;i++){
        k*=i;
    }
    return k;
}
int nCr(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int pasCal(int i,int j){
    return nCr(i,j);
}
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=n-i;j>=0;j--)
            cout<<" ";
        for (int j=0;j<=i;j++){
            int x=pasCal(i,j);
            cout<<" "<<x<<" ";
        }
        cout<<endl;
    }
}
/*
Output:
Enter the number of rows:5
       1
      1  1
     1  2  1
    1  3  3  1
   1  4  6  4  1
*/