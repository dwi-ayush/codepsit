#pragma GCC optimize("O12")
#include <iostream>
int main(){
    std::ios::sync_with_stdio(0);
    for (int i=1;i<=100000;i++){
        for (int j=1;j<=10;j++){
            std::cout<<i<<"x"<<j<<"="<<i*j<<std::endl;
        }
        std::cout<<std::endl;
    }
}