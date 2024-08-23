#include<iostream>
using namespace std;
class vector
{
    public:
    int * arr;
    int size;
    vector(int m)
    {
        size=m;
        arr=new int[size];
    }
    int dotproduct(vector &v)
    {
        int d = 0;
        for(int i=0;i<size;i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
template <class t>
class vector1
{
    public:
    t * arr;
    int size;
    vector1(int m)
    {
        size=m;
        arr=new t[size];
    }
    t dotproduct1(vector1 &v)
    {
        t d = 0;
        for(int i=0;i<size;i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector v1(3);
    v1.arr[0]=4;
    v1.arr[1]=3;
    v1.arr[2]=1;
    vector v2(3);
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1;
    int a=v1.dotproduct(v2);
    cout<<a<<endl;
    vector1 <float>ve1(3);
    ve1.arr[0]=1.4;
    ve1.arr[1]=3.3;
    ve1.arr[2]=0.1;
    vector1 <float> ve2(3);
    ve2.arr[0]=0.1;
    ve2.arr[1]=1.90;
    ve2.arr[2]=4.1;
    float b=ve1.dotproduct1(ve2);
    cout<<b<<endl;
    return 0;
}