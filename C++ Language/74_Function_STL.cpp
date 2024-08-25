#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={2,9,67,3,5,8,89,3,56,78};
    sort(arr, arr+10);
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr, arr+10);
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr, arr+10,less<int>());
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr, arr+10,greater<int>());
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}