#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"tell me your age "<<endl;
    cin>>age;
    if(age<18)
    {
        cout<<"you can not come to party"<<endl;
    }
    else if(age==18)
    {
        cout<<"you are a kid and you will get a kid pass to party"<<endl;
    }
    else
    {
        cout<<"you can come to party"<<endl;
    }
    cout<<"done with if else-if else"<<endl;
    return 0;
}
