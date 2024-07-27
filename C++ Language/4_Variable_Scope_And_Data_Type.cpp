#include<iostream>
using namespace std;
int glo=9;
void sum()
{
    cout<<glo;
}
int main()
{
    int a=67;
    int b=34;
    float pi=3.14;
    char c='k';
    bool is_true=true;
    bool is_false=false;
    int glo=23;
    glo=89;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value of pi is "<<pi<<endl;
    cout<<"the value of c is "<<c<<endl;
    cout<<"the value of is_true is "<<is_true<<endl;
    cout<<"the value of is_false is "<<is_false<<endl;
    sum();
    cout<<endl;
    cout<<glo;
    return 0;
}