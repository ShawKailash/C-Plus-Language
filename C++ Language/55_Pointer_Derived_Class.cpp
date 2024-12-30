#include<iostream>
using namespace std;
class baseclass
{
    public:
    int varbase;
    void display()
    {
        cout<<"displaying base class variable varbase "<<varbase<<endl;
    }
};
class derivedclass : public baseclass
{
    public:
    int varderived;
    void display()
    {
        cout<<"displaying base class variable varbase "<<varbase<<endl;
        cout<<"displaying derived class variable varderived "<<varderived<<endl;
    }
};
int main()
{
    baseclass *baseclasspointer;
    baseclass objbase;
    derivedclass objderived;
    baseclasspointer = &objderived;

    baseclasspointer->varbase=450;
    baseclasspointer->display();

    baseclasspointer->varbase=355;
    baseclasspointer->display();

    derivedclass *derivedclasspointer;
    derivedclasspointer=&objderived;
    derivedclasspointer->varbase=2400;
    derivedclasspointer->display();
    derivedclasspointer->varderived=6700;
    derivedclasspointer->display();
    return 0;
}
