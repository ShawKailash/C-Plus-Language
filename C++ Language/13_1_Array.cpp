#include<iostream>
using namespace std;

int main()
{
    int marks[]={45,67,89,98};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<endl;
    marks[2]=456;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<endl;
    int mathmarks[4];
    mathmarks[0]=678;
    mathmarks[1]=789;
    mathmarks[2]=567;
    mathmarks[3]=345;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    return 0;
}
