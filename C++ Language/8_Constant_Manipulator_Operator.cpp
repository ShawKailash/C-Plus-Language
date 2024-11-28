#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // ************constant************
    int a=45;
    cout<<"the value of a was "<<a<<endl;
    a=67;
    cout<<"the value of a is "<<a<<endl;
    const int b=89;
    cout<<"the value of b is "<<b<<endl;
    /*
    b=78;
    cout<<"the value of b is "<<b<<endl;                     it is constant value of b
    */
   cout<<endl;
   // ***************manipulator******************
   int i=3,j=34,k=576;
   cout<<"the value of i without setw is "<<i<<endl;
   cout<<"the value of j without setw is "<<j<<endl;
   cout<<"the value of k without setw is "<<k<<endl;
   cout<<endl;
   cout<<"the value of i is "<<setw(3)<<i<<endl;
   cout<<"the value of j is "<<setw(3)<<j<<endl;
   cout<<"the value of k is "<<setw(3)<<k<<endl;
   cout<<endl;
   // **************operator precedence*************
   int x=2,y=4,z;
   z=x*y+7-8/y;
   cout<<z<<endl;
    return 0;
}
