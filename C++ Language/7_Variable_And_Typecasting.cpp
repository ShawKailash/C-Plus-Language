#include<iostream>
using namespace std;
int c=5;
int main()
{
    // ********************build in data type*****************
    int a, b ,c;
    cout<<"enter the value of a is "<<endl;
    cin>>a;
    cout<<"enter the value of b is "<<endl;
    cin>>b;
    c=a + b;
    cout<<"the sum is "<<c<<endl;
    cout<<"the global c is "<<::c<<endl;
    cout<<endl;
    // ****************float, double, and long double literals******************
    float d=45.6F;
    long double e=45.6L;
    cout<<"the value of d is "<<d<<endl;
    cout<<"the value of e is "<<e<<endl;
    cout<<endl;
    cout<<"the size of 45.6 is "<<sizeof(45.6)<<endl;
    cout<<"the size of 45.6f is "<<sizeof(45.6f)<<endl;
    cout<<"the size of 45.6F is "<<sizeof(45.6F)<<endl;
    cout<<"the size of 45.6l is "<<sizeof(45.6l)<<endl;
    cout<<"the size of 45.6L is "<<sizeof(45.6L)<<endl;
    cout<<endl;
    // ***********Reference variables*****************
    float x=678;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<endl;
    // *************typecasting************
    int g = 45;
    float h = 45.67;
    cout<<"the value of g is "<<(float)g<<endl;
    cout<<"the value of g is "<<float(g)<<endl;
    cout<<"the value of h is "<<(int)h<<endl;
    cout<<"the value of h is "<<int(h)<<endl;
    int i=int(h);
    cout<<"the value of i is "<<i<<endl;
    cout<<endl;
    cout<<"the expression is "<<g + h<<endl;
    cout<<"the expression is "<<g + int(h)<<endl;
    cout<<"the expression is "<<g + (int)h<<endl;
    return 0;
}
