#include<iostream>
using namespace std;

int main()
{
    int marks[]={56,67,78,98};
    int i=0;
    do
    {
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    }
    while(i<4);
    return 0;
}
