#include<iostream>
using namespace std;
class complex;

class calculator
{
    public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};
class complex
{
    int a, b;
    friend int calculator :: sumrealcomplex(complex, complex);
    friend int calculator :: sumcompcomplex(complex, complex);

    public:
    void setnumber(int n1, int n2)
    {
        a=n1;
        b=n2;
    }
    void printnumber()
    {
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int calculator :: sumrealcomplex(complex o1,complex o2)
{
    return (o1.a + o2.a);
}
int calculator :: sumcompcomplex(complex o1,complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setnumber(1,4);
    o1.printnumber();
    o2.setnumber(5,7);
    o2.printnumber();
    calculator cal;
    int res1 = cal.sumrealcomplex(o1, o2);
    cout<<"the sum of complex part of o1 and o2 is "<<res1<<endl;
    int res2 = cal.sumcompcomplex(o1, o2);
    cout<<"the sum of complex part of o1 and o2 is "<<res2<<endl;
    return 0;
}