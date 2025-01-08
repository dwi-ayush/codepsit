#include <iostream>
#include <vector>
using namespace std;
int main(){
    std::vector<int> vec1 = {100,200,300,400,500};
    std::vector<int> vec2 = {10,20,30,40,50};

    //Print orignial vectos
    std::cout <<"Before swap:" <<std::endl;
    std::cout << "vec1: ";
    for (int val : vec1){
        std:: cout<<val << " ";
    }
    std:: cout<< std::endl;
    std::cout<<"vec2:";
    for (int val : vec2){
        std::cout << val << " ";
    }
    std::cout << std::endl;
    // swap contents of vec1 and vec2
    vec1.swap(vec2); // if we use utility header file then we can write std::swap(vec1,vec2);
    std::cout <<"After swap:" <<std::endl;
    std::cout << "vec1: ";
    for (int val : vec1){
        std:: cout<<val << " ";
    }
    std:: cout<< std::endl;
    std::cout<<"vec2:";
    for (int val : vec2){
        std::cout << val << " ";
    }

    // using utility swap
    std::swap(vec1,vec2);
    std::cout<< "using util func:";
    std::cout <<"Before swap:" <<std::endl;
    std::cout << "vec1: ";
    for (int val : vec1){
        std:: cout<<val << " ";
    }
    std:: cout<< std::endl;
    std::cout<<"vec2:";
    for (int val : vec2){
        std::cout << val << " ";
    }
    // print swapped vectors 
    

}