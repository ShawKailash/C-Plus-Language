#include<iostream>
using namespace std;
class employee
{
    int id;
    static int count;

    public:
    void setdata(void)
    {
        cout<<"enter the id "<<endl;
        cin>>id;
        count++;
    }
    void getdata(void)
    {
        cout<<"the id of this employee is "<<id<<" and this is employee number "<<count<<endl;
    }
    static void getcount(void)
    {
        cout<<"the value of count is "<<count<<endl;
    }
};
int employee :: count;
int main()
{
    employee kailash, komal, karan;
    kailash.setdata();
    kailash.getdata();
    kailash.getcount();

    komal.setdata();
    komal.getdata();
    komal.getcount();

    karan.setdata();
    karan.getdata();
    karan.getcount();
    return 0;
}