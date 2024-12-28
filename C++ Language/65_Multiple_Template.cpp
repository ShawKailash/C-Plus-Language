#include<iostream>
using namespace std;
template <class t1, class t2>
class myclass
{
    public:
    t1 data1;
    t2 data2;
    myclass(t1 a, t2 b)
    {
        data1=a;
        data2=b;
    }
    void display()
    {
        cout<<this->data1<<endl<<this->data2<<endl;
    }
};
int main()
{
    myclass <int, float> obj(3, 4.5);
    obj.display();
    myclass <char, int> obj1('e', 56);
    obj1.display();
    return 0;
}
