#include<iostream>
using namespace std;
class employee{
    int id;
    int salary;
    
    public:
    void setid(void)
    {
        salary=122;
        cout<<"enter the id of employee "<<endl;
        cin>>id;
    }
    void getid(void)
    {
        cout<<"the id of employee is "<<id<<" and salary is "<<salary<<endl;
    }
};
int main()
{
    employee fb[4];
    for(int i=0;i<4;i++)
    {
        fb[i].setid();
        fb[i].getid();
    }
    return 0;
}
