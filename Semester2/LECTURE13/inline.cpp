#include <iostream>
using namespace std;
class item 
{
    int number; // private by default
    float cost; // private by default
    public:
        void getdata(int a , float b);
        // prototype decleration, to be defined 
        // function defined inside class
        void putData();
};