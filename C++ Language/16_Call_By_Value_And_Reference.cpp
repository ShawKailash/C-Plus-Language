#include<iostream>
using namespace std;
void swappointer(int * a, int * b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapreferencevar(int & a, int & b)
{
    int temp = a;
    a = b;
    b = temp;
}
int & swapxvaluechange(int & a, int & b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main()
{
    int x=5, y=8;
    cout<<"the value of a is "<<x<<" and the value of b is "<<y<<endl;
    swappointer(&x, &y);
    cout<<"the value of a is "<<x<<" and the value of b is "<<y<<endl;
    cout<<endl;
    int i=3, j=6;
    cout<<"the value of a is "<<i<<" and the value of b is "<<j<<endl;
    swapreferencevar(i, j);
    cout<<"the value of a is "<<i<<" and the value of b is "<<j<<endl;
    cout<<endl;
    swapxvaluechange(i, j)=789;
    cout<<"the value of a is "<<i<<" and the value of b is "<<j<<endl;
    return 0;
}