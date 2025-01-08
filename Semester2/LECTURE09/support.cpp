#include <iostream>
extern double warming;

void update (double dt);
void local();
using std::cout;
void update ( double dt) // modifies global variable
{
    extern double warming; // optional re-declaration
    warming += dt; // uses global warming
    cout << "updating global warming to " << warming;
    cout << " degree . \n";
}
void local () // uses local variable
{
    double warming = 0.8; // new variable hides external one
    cout << "Local warming= "<< warming << "degrees.\n";
    // Access global variable with the 
    // scope resolution operator
    cout << "But global warming = " << :: warming;
    cout << "degrees. \n";
}
