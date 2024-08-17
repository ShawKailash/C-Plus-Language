#include<iostream>
using namespace std;
class base1
{
    public:
    void greet()
    {
        cout<<"how are you"<<endl;
    }
};
class base2
{
    public:
    void greet()
    {
        cout<<"kaise ho"<<endl;
    }
};
class derived : public base1, public base2
{
    int a;
    public:
    void greet()
    {
        base1 :: greet();
        base2 :: greet();
    }
};
class base3
{
    public:
    void say()
    {
        cout<<"hello world"<<endl;
    }
};
class base4 : public base3 
{
    public:
    void say()
    {
        cout<<"hello my beautiful people"<<endl;
    }
};
int main()
{
    base1 base1obj;
    base1obj.greet();
    base2 base2obj;
    base2obj.greet();
    derived d;
    d.greet();
    base3 b;
    b.say();
    base4 c;
    c.say();
    return 0;
}