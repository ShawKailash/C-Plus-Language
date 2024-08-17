#include<iostream>
#include<cmath>
using namespace std;
class simplecalculator
{
    int a, b;
    public:
    void getdata1()
    {
        cout<<"enter the value of a is "<<endl;
        cin>>a;
        cout<<"enter the value of b is "<<endl;
        cin>>b;
    }
    void performoperators1()
    {
        cout<<"the value of a + b is "<<a + b<<endl;
        cout<<"the value of a - b is "<<a - b<<endl;
        cout<<"the value of a * b is "<<a * b<<endl;
        cout<<"the value of a / b is "<<a / b<<endl;
    }
};
class scientificalculator
{
    int a, b;
    public:
    void getdata2()
    {
        cout<<"enter the value of a is "<<endl;
        cin>>a;
        cout<<"enter the value of b is "<<endl;
        cin>>b;
    }
    void performoperators2()
    {
        cout<<"the value of cos(a) is "<<cos(a)<<endl;
        cout<<"the value of sin(a) is "<<sin(a)<<endl;
        cout<<"the value of exp(a) is "<<exp(a)<<endl;
        cout<<"the value of tan(a) is "<<tan(a)<<endl;
    }
};
class hybridcalculator : public simplecalculator, public scientificalculator
{

};
int main()
{
    hybridcalculator calc;
    calc.getdata1();
    calc.performoperators1();
    calc.getdata2();
    calc.performoperators2();
    return 0;
}