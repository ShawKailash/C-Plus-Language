#include<iostream>
using namespace std;
class base1
{
    protected:
    int base1int;
    public:
    void set_base1int(int a)
    {
        base1int=a;
    }
};
class base2
{
    protected:
    int base2int;
    public:
    void set_base2int(int a)
    {
        base2int=a;
    }
};
class base3
{
    protected:
    int base3int;
    public:
    void set_base3int(int a)
    {
        base3int=a;
    }
};
class derived : public base1, public base2, public base3
{
    public:
    void show()
    {
        cout<<"the value of base 1 is "<<base1int<<endl;
        cout<<"the value of base 2 is "<<base2int<<endl;
        cout<<"the value of base 3 is "<<base3int<<endl;
        cout<<"the sum value of base 1 , base2 and base 3 is "<<base1int+base2int+base3int<<endl;
    }
};
int main()
{
    derived kailash;
    kailash.set_base1int(20);
    kailash.set_base2int(10);
    kailash.set_base3int(30);
    kailash.show();
    return 0;
}
