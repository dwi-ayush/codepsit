#include <iostream>
using namespace std;
double warming = 0.3;
void update ( double dt);
void local();
int main(){
    cout << "GLobal warming is " << warming << " degrees. \n";
    update (0.1);
    cout << "GLobal warming is " << warming << " degrees.\n";
    local(); // call function with local warming 
    cout << "Global warming is " << warming << " degree.\n";
    return 0;
}