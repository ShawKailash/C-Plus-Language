#include<iostream>
using namespace std;
template <class t1=int, class t2=float, class t3=char>
class kailash
{
    public:
    t1 a;
    t2 b;
    t3 c;
    kailash(t1 x, t2 y, t2 z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display()
    {
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
    }
};
int main()
{
    kailash <> k(45, 67.56, 'm');
    k.display();
    cout<<endl;
    kailash <float, char, int> m(34.68, 'k', 56);
    m.display();
    return 0;
}
