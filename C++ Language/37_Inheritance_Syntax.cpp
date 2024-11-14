#include<iostream>
using namespace std;
class employee
{
    public:
    int id;
    float salary;
    employee(int inpid)
    {
        id=inpid;
        salary=56.44;
    }
    employee(){}
};
class programmer : public employee
{
    public:
    int languagecode;
    programmer(int inpid)
    {
        id=inpid;
        languagecode=9;
    }
    void getdata()
    {
        cout<<id<<endl;
    }
};
int main()
{
    employee kailash(1),komal(2);
    cout<<kailash.salary<<endl;
    cout<<komal.salary<<endl;
    programmer skillf(10);
    cout<<skillf.languagecode<<endl;
    cout<<skillf.id<<endl;
    skillf.getdata();
    return 0;
}
