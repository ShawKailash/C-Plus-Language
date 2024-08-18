#include<iostream>
using namespace std;
class test1
{
    int a;
    int b;
    public:
    test1(int i, int j) : a(i), b(j)
    {
        cout<<"constructor executed"<<endl;
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};
class test2
{
    int a;
    int b;
    public:
    test2(int i, int j) : a(i), b(i+j)
    {
        cout<<"constructor executed"<<endl;
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};
class test3
{
    int a;
    int b;
    public:
    test3(int i, int j) : a(i), b(2*j)
    {
        cout<<"constructor executed"<<endl;
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};
class test4
{
    int a;
    int b;
    public:
    test4(int i, int j) : a(i), b(a+j)
    {
        cout<<"constructor executed"<<endl;
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};
class test5
{
    int b;
    int a;
    public:
    test5(int i, int j) : b(j), a(i+b)
    {
        cout<<"constructor executed"<<endl;
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};
class result : public test1, public test2, public test3, public test4, public test5
{
    public:
    result(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j) : test1(a,b),test2(c,d),test3(e,f),test4(g,h),test5(i,j)
    {

    }
};
int main()
{
    result r(1,2,3,4,5,6,7,8,9,10);
    return 0;
}