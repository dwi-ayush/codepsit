#include <iostream>
#include <vector>
int main(){
    std:: vector <int> numbers;
    int value;
    std:: cout <<"Enter numbers to add to the vector (enter - 1 to stop):" << std::endl;
    while(true){
        std::cin>>value;
        if (value == -1){
            break;
        }
        numbers.push_back(value);
    }
    std::cout<< "You entered:";
    for (int num : numbers){
        std::cout<<num;
    }
}