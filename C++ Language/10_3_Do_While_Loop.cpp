#include<iostream>
using namespace std;

int main()
{
    int num;
    int i=1;
    cout<<"enter the number is "<<endl;
    cin>>num;
    do
    {
        cout<<num<<" x "<<i<<"= "<<num*i<<endl;
        i++;
    }
    while(i<=10);
    cout<<"done with do while loop"<<endl;
    return 0;
}