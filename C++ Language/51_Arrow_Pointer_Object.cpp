#include<iostream>
using namespace std;
class complex
{
    int real, imaginary;
    public:
    void setdata(int a, int b)
    {
        real=a;
        imaginary=b;
    }
    void getdata()
    {
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginary part is "<<imaginary<<endl;
    }
};
int main()
{
    complex c1;
    c1.setdata(2,4);
    c1.getdata();
    complex *ptr =&c1;
    (*ptr).setdata(6,8);
    (*ptr).getdata();
    complex *ptr1 = new  complex;
    (*ptr1).setdata(1,3);
    (*ptr1).getdata();
    complex *ptr2 = new  complex;
    ptr2->setdata(5,7);
    ptr2->getdata();
    return 0;
}