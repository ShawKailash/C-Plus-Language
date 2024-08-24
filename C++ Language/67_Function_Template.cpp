#include<iostream>
using namespace std;
template <class t>
void swapp(t &a, t &b)
{
    t temp=a;
    a=b;
    b=temp;
}
template <class t1, class t2>
float funcaverage(t1 a, t2 b)
{
    float avg = (a+b)/2.0;
    return avg;
}
int main()
{
    float a;
    a=funcaverage(6, 4.5);
    cout<<"the average of these number is "<<a<<endl;
    int x=5, y=8;
    swapp(x, y);
    cout<<x<<endl<<y<<endl;
    return 0;
}