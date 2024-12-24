#include<iostream>
using namespace std;
float moneyreceived(int currentmoney, float factor=1.04)
{
    return currentmoney * factor;
}
int main()
{
    int money = 10000;
    cout<<"if you have "<<money<<" rs in your bank account you will recive "<<moneyreceived(money)<<" rs after 1 year"<<endl;
    cout<<"for vip if you have "<<money<<" rs in your bank account you will recive "<<moneyreceived(money, 1.1)<<" rs after 1 year"<<endl;
    return 0;
}
