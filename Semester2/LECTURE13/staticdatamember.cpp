#include <iostream>
using namespace std;
class graph
{
    static int count;
    int number;
    public:
    void getdata(int a){
        number = a;
        count++;
    }
    void getcount(void){
        cout<<"count:";
        cout<<count<<"\n";
    }

};
int graph::count=10;// definition of static data member
// type and scope of each static member variable must be defined
//outside class defintion. this is necessary because the static 
//member are stored separately rather than as a part of an object 
// since they are associated with the class iteself rather than with 
// any class object, thay are also known as class variable 
// the static variable count is initiazed to zero when the object are craeted
// some initial values are also assigned to the variable. For instance
// int graph :: count=10;
int main()
{
    graph a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(10);
    b.getdata(100);
    c.getdata(1000);

    cout<<"After reading data"<<"\n";

    a.getcount();
    b.getcount();
    c.getcount();
    return 0;
}