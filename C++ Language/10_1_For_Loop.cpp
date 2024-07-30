#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number is "<<endl;
    cin>>num;
    for(int i=1;i<=10;i++)
    {
        cout<<num<<" x "<<i<<"= "<<num*i<<endl;
    }
    cout<<"done with for loop"<<endl;
    return 0;
}