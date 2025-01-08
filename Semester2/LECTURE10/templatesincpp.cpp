#include <iostream>
template <typename Armaan>
void Swap(Armaan &a,Armaan &b);
int main(){
    using namespace std;
    int i = 10;
    int j = 20;
    cout << "i, j ="<<i<<","<<j<<".\n";
    cout<<"Using compiler-generated int swapper:\n";
    Swap(i,j);
    cout<< "Now i,j = " << i<<","<<j<<".\n";
    double x = 24.5;
    double y = 81.7;
    cout<< "Now i, j = "<<i<<","<<j<<".\n";
    cout<< "Using compiler-generated double swapper:\n";
    Swap(x,y);
    cout<<"Now x,y= "<<x<<","<<y<<".\n";
    return 0;
}
template <typename Armaan> 
void Swap(Armaan &a,Armaan &b){
    Armaan temp = a;
    a = b;
    b = temp;
}
/*
Output:
i, j =10,20.
Using compiler-generated int swapper:
Now i,j = 20,10.
Now i, j = 20,10.
Using compiler-generated double swapper:
Now x,y= 81.7,24.5.
*/