#include<iostream>
using namespace std;
template <class t>
class kailash
{
    public:
    t data;
    kailash(t a)
    {
        data=a;
    }
    void display();
};
template <class t>
void kailash<t> :: display()
{
    cout<<data<<endl;
}
void func(int a)
{
    cout<<"i am first() "<<a<<endl;
}
template <class t>
void func(t a)
{
    cout<<"i am second() "<<a<<endl;
}
template <class t>
void func1(t a)
{
    cout<<"i am third() "<<a<<endl;
}
int main()
{
    kailash<int> k(6);
    cout<<k.data<<endl;
    kailash<float> s(67.8);
    cout<<s.data<<endl;
    kailash<char> i('m');
    cout<<i.data<<endl;
    cout<<endl;
    kailash<int> x(7);
    x.display();
    kailash<float> y(34.6899);
    y.display();
    kailash<char> z('t');
    z.display();
    cout<<endl;
    func(4);
    func1(87);
    return 0;
}
