#include<iostream>
using namespace std;

int main()
{
    int a = 4;
    int * ptr = &a;
    *ptr = 8888;
    cout<<"the value of a is "<<*(ptr)<<endl;
    int *p = new int (40);
    cout<<"the value at address p is "<<*(p)<<endl;
    float *pt = new float (50.675);
    cout<<"the value at address p is "<<*(pt)<<endl;
    int *arr = new  int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;
    delete [] arr;
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;
    return 0;
}
