#include<iostream>
using namespace std;
class shopitem
{
    int id;
    float price;
    public:
    void setdata(int a, float b)
    {
        id=a;
        price=b;
    }
    void getdata(void)
    {
        cout<<"cade of this item is "<<id<<endl;
        cout<<"cade of this price is "<<price<<endl;
    }
};
int main()
{
    int size=3;
    shopitem *ptr = new shopitem [size];
    shopitem *ptrtemp = ptr;
    int p, i;
    float q;
    for(i=0;i<size;i++)
    {
        cout<<"enter id and price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for(i=0;i<size;i++)
    {
        cout<<"item number "<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    return 0;
}