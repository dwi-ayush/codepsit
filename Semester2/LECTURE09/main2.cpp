//Example
// part 1
// twofile1.cpp -- variables with external and internal linkage

#include <iostream> // to be compiled with two file2.cpp
int apple = 3; // external variable definition
int Spinach = 30 ; // external variable defintion
static int rose = 300; // static , interal linkage
// function prototeyp
void remote_access();
int main()
{
    using namespace std;
    cout << "main() reports the following addresses:\n";
    cout << apple << "\t\t"<< &apple <<endl << Spinach << "\t\t" << &Spinach << " =&Spinach";
    cout << rose << "\t\t"<< &rose << " = &rose \n";
    remote_access ();
    return 0;
}