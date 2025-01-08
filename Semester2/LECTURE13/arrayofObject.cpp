#include <iostream>
using namespace std;
class employee
{
    char name[30];
    int age;
    public:
    void getdata(void);
    void putdata(void);
};
void employee :: getdata(void)
{
    cout<<"enter name:";
    cin>>name;
    cout<<"enter age:";
    cin>>age;
}
void employee :: putdata(void)
{
    cout<<"name :"<<name<<endl;
    cout<<"age :"<<age<<endl;
}
const int size=3;
int main()
{
    employee manager[size];
    for (int i=0;i<=size;i++){
        cout<<"detail "<<i+1<<"\n";
        manager[i].getdata();
    }
    cout<<"\n";
    for (int i=0;i<=size;i++){
        cout<<"\n manager"<<i+1<<"\n";
        manager[i].putdata();
    }
    return 0;
}