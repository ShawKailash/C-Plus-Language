#include<iostream>
using namespace std;

int main()
{
    int num;
    int i=1;
    cout<<"enter the number is "<<endl;
    cin>>num;
    while(i<=10)
    {
        cout<<num<<" x "<<i<<"= "<<num*i<<endl;
        i++;
    }
    cout<<"done with while loop"<<endl;
    return 0;
}
