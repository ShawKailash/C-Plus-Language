#include<iostream>
using namespace std;
class complex
{
    int a, b;

    public:
    complex(int,int);
    void printnumber()
    {
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex :: complex(int x, int y)
{
    a=x;
    b=y;
}
int main()
{
    complex a(4, 6);
    a.printnumber();
    complex b =complex(7, 8);
    b.printnumber();
    return 0;
}
