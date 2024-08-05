#include<iostream>
using namespace std;
union money
{
    int rice;
    char car;
    float salary;
};
int main()
{
    union money m1;
    m1.rice=34;
    m1.car='k';
    m1.salary=3489.56;
    cout<<m1.salary;
    return 0;
}