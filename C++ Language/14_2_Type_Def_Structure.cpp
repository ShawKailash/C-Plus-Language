#include<iostream>
using namespace std;
typedef struct employee
{
    int eid;
    char favchar;
    float salary;
}ep;
int main()
{
    ep kailash;
    kailash.eid=1;
    kailash.favchar='k';
    kailash.salary=1245.6;
    cout<<"the value is "<<kailash.eid<<endl;
    cout<<"the value is "<<kailash.favchar<<endl;
    cout<<"the value is "<<kailash.salary<<endl;
    return 0;
}