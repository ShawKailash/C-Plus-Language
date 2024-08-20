#include<iostream>
using namespace std;
class thiscomplex
{
    int a;
    public:
    void setdata(int a)
    {
        this->a=a;
    }
    void getdata()
    {
        cout<<"the value of a is "<<a<<endl;
    }
};
class thiscomplex1
{
    int a;
    public:
    thiscomplex1 & setdata1(int a)
    {
        this->a=a;
        return *this;
    }
    void getdata1()
    {
        cout<<"the value of a is "<<a<<endl;
    }
};
int main()
{
    thiscomplex th;
    th.setdata(4);
    th.getdata();
    thiscomplex1 th1;
    th1.setdata1(5);
    th1.getdata1();
    return 0;
}