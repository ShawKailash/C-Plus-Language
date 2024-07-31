#include<iostream>
using namespace std;

int main()
{
    int a=4;
    int *b;
    b=&a;
    int **c;
    c=&b;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the address of a is "<<b<<endl;
    cout<<"the address of a is "<<&a<<endl;
    cout<<"the value of a is "<<*b<<endl;
    cout<<"the value of a is "<<**c<<endl;
    cout<<"the address of a is "<<*c<<endl;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;
    return 0;
}