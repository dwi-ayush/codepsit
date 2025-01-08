#include <iostream>
using namespace std;
class MyClass {
    private:
        int privateData;
    public:
    void setPrivateData(int data){
        privateData = data;
    }
    int getPrivateData(){
        return privateData;
    }
};
int main(){
    MyClass obj1;
    obj1.setPrivateData(42000);
    //obj1.privateData
    cout<< "Private data is : " << obj1.getPrivateData() << endl;
    return 0;
}

// public and protected member of Base class
// become public and protected member of Derived class
// private members of Base remain inaccessible to derived class
// Constructor inheritance:
// the base class has a constructor that takes it's integer parameter and
// initialize it's protected member
// by the name protectedVar
// when object of derived class of derived class is created
// the constructor of the base is automatically called to initialize the base of the derived object
// Accessing protected members:
// the derived class can access the protected member
// protectVar inherited from base class
// it uses this access to modify protectedVar
// in the modifyProtectedVar function
// Function Inheritance:
// the base class has a public member function
// printProtectedVar that prints the value of protected variable
// since protectedVar is accessible to derived
// derived can call printProtectedVar to display the value of protectedVar