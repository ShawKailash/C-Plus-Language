#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}
int fibonacci(int n)
{
    if(n<2)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-2)+fibonacci(n-1);
    }
}
int main()
{
    int num;
    cout<<"enter the number is "<<endl;
    cin>>num;
    cout<<"the factorial of "<<num<<" is "<<factorial(num)<<endl;
    cout<<endl;
    cout<<"the fibonacci sequence at position "<<num<<" is "<<fibonacci(num)<<endl;
    return 0;
}