#include<iostream>
using namespace std;
int sum(int a , int b)
{
    return a+b;
}
int sum(int a , int b , int c)
{
    return a+b+c;
}
int volume(int a)
{
    return a*a*a;
}
float volume(double r , int h)
{
    return 3.14*r*r*h;
}
int volume(int l , int b , int h)
{
    return l*b*h;
}
int main()
{
    cout<<"the sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"the sum of 3 ,6 and 9 is "<<sum(3,6,9)<<endl;
    cout<<"the volume of cube of side 3 is "<<volume(3)<<endl;
    cout<<"the volume of cylinder of radius 3 and height 6 is "<<volume(3,6)<<endl;
    cout<<"the volume of cuboid of 3 , 6 and 9 is "<<volume(3,6,9)<<endl;
    return 0;
}