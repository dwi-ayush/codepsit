// Example 5 staic member function
/* Like static member variable, we can also have static member function. A member function that is declared staic has the following properties:
1- static function can have access to only other staic members ( functions or variables)*/

#include <iostream>
using namespace std;
class exam {
     int code;
     static int count;
     public:
     void setcode()
     {
        code=++count;
     }
     void showcode(void)
     {
        cout<<"object number :"<<code<<endl;
     }
     static void showcount(void)// static member function
     {
        cout<<"count:"<<count<<"\n";

     }
};
int exam :: count;
int main(){
    exam t1,t2,t3;
    t1.setcode();
    t2.setcode();
    exam::showcount; // accessing the static member function using class name
    t3.setcode(); // rather than object
    exam :: showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    return 0;
}