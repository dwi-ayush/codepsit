#include <iostream>
class Base {
    protected:
        int protectedVar;
    public:
        Base(int value) : protectedVar(value) {}
        void printProtectedVar() const {
            std::cout << "Protected variable: " << protectedVar << std::endl;
        }
};
class Derived : public Base {
    public:
        Derived(int value) : Base(value) {}
    void modifyProtectedVar(int value){
        protectedVar=value;
    }
};
int main(){
    Derived DerivedObj(42);
    DerivedObj.printProtectedVar();
    DerivedObj.modifyProtectedVar(100);
    DerivedObj.printProtectedVar();
    return 0;
}